#include <stdio.h>
#include <string.h>

int main(){
    char arq_entrada[60], arq_saida[60];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arq_entrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arq_saida);

    FILE *fp = fopen(arq_entrada, "r");
    FILE *fpOut = fopen(arq_saida, "w");

    char aux_cidade[40];
    int aux_num_hab = 0;

    char cidade_mais_pop[40];
    int num_hab = 0;

    while(!feof(fp)){
        fscanf(fp, "%s %d", aux_cidade, &aux_num_hab);

        if(aux_num_hab > num_hab){
            strcpy(cidade_mais_pop, aux_cidade);
            num_hab = aux_num_hab;
        }
    }

    fprintf(fpOut, "%s %d", cidade_mais_pop, num_hab);

    fclose(fp);
    fclose(fpOut);

    return 0;
}