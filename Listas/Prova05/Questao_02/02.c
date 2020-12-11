#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[100];
    char telefone[13];
    int dia, mes;
} Contato;

void atualizar_arq(FILE *fp, int *pQnt, Contato *contatos){
    int cont_atual = *pQnt;
    fp = fopen("contatos.dat", "wb");
    int i;

    for(i=0; i<cont_atual; i++){
        fprintf(fp, "%s\n%s\n%02d/%02d\n", contatos[i].nome, contatos[i].telefone, contatos[i].dia, contatos[i].mes);
    }

    fclose(fp);
}

void inserir_contato(FILE *fp, int *pQnt, Contato *contatos){

    int cont_atual = *pQnt;
    char nome[100], barra;
    int dia, mes;


    printf("Digite o nome do contato: ");
    gets(nome);
    strcpy(contatos[cont_atual].nome, nome);
    printf("Digite o telefone do contato: ");
    scanf("%s", contatos[cont_atual].telefone);
    printf("Digite o dia e o mes do contato no formato (dd/mm): ");
    scanf("%d %c %d", &dia, &barra, &mes);
    while(1){
        if((dia <= 0 || dia >= 32) || (mes <= 0 || mes >= 13)){
            printf("Data incorreta. Digite novamente: ");
            scanf("%d %c %d", &dia, &barra, &mes);
        }
        else{
            contatos[cont_atual].dia = dia;
            contatos[cont_atual].mes = mes;
            break;
        }
    }
    

    // Sobrescrever arquivo:
    (*pQnt)++;
    atualizar_arq(fp, pQnt, contatos);
}

void remover_contato(FILE *fp, int *pQnt, Contato *contatos){
    Contato aux;
    int num, i, qnt_contatos = *pQnt;

    printf("Digite o numero(a partir de 1) do contato que voce quer remover: ");
    scanf("%d", &num);
    num--;

    for(i=num; i<=qnt_contatos; i++){
        contatos[num] = contatos[num+1];
    }
    
    (*pQnt)--;

    atualizar_arq(fp, pQnt, contatos);
}

void pesquisar_nome(FILE *fp, int *pQnt, Contato *contatos){
    char nome[100];
    int i, qnt_cont = *pQnt;
    printf("Digite o nome que voce quer pesquiar: ");
    gets(nome);

    for(i=0; i<qnt_cont; i++){
        if(strcmp(contatos[i].nome, nome) == 0){
            printf("Ha o contato na agenda.\n");
            printf("- - - - - - - - - - - - - - -\n");
            printf("- Nome: %s\n", contatos[i].nome);
            printf("- Telefone: %s\n", contatos[i].telefone);
            printf("- Aniversario: %02d/%02d\n", contatos[i].dia, contatos[i].mes);
            printf("- - - - - - - - - - - - - - -\n");

            break;
        }
    }
}

void listar_contatos(FILE *fp, int *pQnt, Contato *contatos){
    printf("Os contatos da agenda sao:\n");
    int qnt_cnts = *pQnt, i;

    for(i=0; i<qnt_cnts; i++){
        printf("- - - - - - - - - - - - - - -\n");
        printf("- Nome: %s\n- Telefone: %s\n- Aniversario: %02d/%02d\n", contatos[i].nome, contatos[i].telefone, contatos[i].dia, contatos[i].mes);
        printf("- - - - - - - - - - - - - - -\n");
    }

}

void nome_letra(FILE *fp, int *pQnt, Contato *contatos){
    char letra;
    int qnt_cnts = *pQnt, i;

    printf("Digite a letra inicial que voce deseja procurar nos contatos: ");
    scanf("%c", &letra);

    for(i=0; i<qnt_cnts; i++){
        if(tolower(contatos[i].nome[0]) == letra){
            printf("- - - - - - - - - - - - - - -\n");
            printf("- Nome: %s\n- Telefone: %s\n- Aniversario: %02d/%02d\n", contatos[i].nome, contatos[i].telefone, contatos[i].dia, contatos[i].mes);
            printf("- - - - - - - - - - - - - - -\n");
        }
    }
}

void aniversariantes_mes(FILE *fp, int *pQnt, Contato *contatos){
    int i, mes, qnt_cnts = *pQnt;

    printf("Digite o numero do mes (Formato MM): ");
    scanf("%d", &mes);

    for(i=0; i<qnt_cnts; i++){
        if(contatos[i].mes == mes){
            printf("- - - - - - - - - - - - - - -\n");
            printf("- Aniversariante:\n");
            printf("- Nome: %s\n- Telefone: %s\n- Aniversario: %02d/%02d\n", contatos[i].nome, contatos[i].telefone, contatos[i].dia, contatos[i].mes);
            printf("- - - - - - - - - - - - - - -\n");
        }
    }


}

int main(){
    int func, qnt_contatos=0;
    int *pQnt = &qnt_contatos;

    Contato* contatos = malloc(0);
    FILE *fp;

    while(1){
        printf("Caso queira encerrar, digite 0. Caso contrario, digite o numero de uma funcao dentre as seguintes:\n");
        printf("(1) - Inserir contato\n");
        printf("(2) - Remover contato\n");
        printf("(3) - Pesquisar contato pelo nome\n");
        printf("(4) - Listar todos contatos\n");
        printf("(5) - Listar os contatos cujo nome inicia com uma dada letra\n");
        printf("(6) - Imprimir os nomes dos aniversariantes do mes\n");

        scanf("%d", &func);
        getchar();

        if(func == 0) break;

        else if(func == 1){
            contatos = realloc(contatos, (qnt_contatos+1)*sizeof(Contato));
            inserir_contato(fp, pQnt, contatos);
        }
        else if(func == 2){
            remover_contato(fp, pQnt, contatos);
            contatos = realloc(contatos, (qnt_contatos)*sizeof(Contato));
        }
        else if(func == 3){
            pesquisar_nome(fp, pQnt, contatos);
        }
        else if(func == 4){
            listar_contatos(fp, pQnt, contatos);
        }
        else if(func == 5){
            nome_letra(fp, pQnt, contatos);
        }
        else if(func == 6){
            aniversariantes_mes(fp, pQnt, contatos);
        }

    }


    free(contatos);

    return 0;
}