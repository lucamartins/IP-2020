#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[40];
    double nota;
} Aluno;

int main(){
    int N, i;
    char buffer[60], *piece;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &N);
    getchar();

    Aluno *alunos;
    alunos = (Aluno*) malloc(N * sizeof(Aluno));

    FILE *fp; // file pointer
    fp = fopen("saida.bin", "wb");

    printf("Digite o nome do aluno e sua nota final, separada por virgula:\n");
    for(i=0; i<N; i++){
        // Leitura de dados pelo stdin
        gets(buffer);
        piece = strtok(buffer, ",");
        strcpy(alunos[i].nome, piece);
        piece = strtok(NULL, ",");
        alunos[i].nota = strtod(piece, NULL);

        // Escrita dos dados num arquivo binario
        fprintf(fp, "%-40s; %.2lf", alunos[i].nome, alunos[i].nota);
        if(i != N-1) fprintf(fp, "\n");
    }

    free(alunos);
    fclose(fp);

    // Lendo o arquivo binario. 'rb' == Read binary  // 'wb' == Write binary
    char aux_nome[60], nome[60];
    double aux_nota=0, maior_nota=0;

    fp = fopen("saida.bin", "rb");
    for(i=0; i<N; i++){
        fgets(buffer, sizeof(buffer), fp);
        buffer[strlen(buffer)-1] = 0;

        piece = strtok(buffer, ";");
        strcpy(aux_nome, piece);

        piece = strtok(NULL, ";");
        aux_nota = strtod(piece, NULL);


        if(aux_nota > maior_nota){
            maior_nota = aux_nota;
            strcpy(nome, aux_nome);
        }
    }

    printf("Nome do aluno com a maior nota: %s\n", nome);

    fclose(fp);


    return 0;
}