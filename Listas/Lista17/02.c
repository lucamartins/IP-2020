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
        fprintf(fp, "%-40s %.2lf", alunos[i].nome, alunos[i].nota);
        if(i != N-1) fprintf(fp, "\n");
    }

    free(alunos);
    fclose(fp);

    // Lendo o arquivo binario. 'rb' == Read binary  // 'wb' == Write binary
    fp = fopen("saida.bin", "rb");
    for(i=0; i<N; i++){
        fgets(buffer, sizeof(buffer), fp);
        printf("%s", buffer);
    }

    fclose(fp);


    return 0;
}