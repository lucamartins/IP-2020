#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N, tam, i;
    double *notas;
    char **nomes, buffer[40];
    FILE* fp;
    fp = fopen("output.txt", "w");

    printf("Digite o numero de alunos: ");
    scanf("%d", &N);
    getchar();


    nomes = malloc(N * sizeof(char*));
    notas = malloc(N * sizeof(double));

    printf("Digite os nomes dos alunos:\n");
    for(i=0; i<N; i++){
        gets(buffer);
        tam = strlen(buffer);
        nomes[i] = malloc(tam * sizeof(char));
        strcpy(nomes[i], buffer);
    }

    printf("Digite as notas dos alunos:\n");
    for(i=0; i<N; i++){
        scanf("%lf", &notas[i]);
    }


    for(i=0; i<N; i++){
        fprintf(fp, "%-40s %.2lf\n", nomes[i], notas[i]);
    }

    free(notas);
    free(nomes);
    fclose(fp);

    return 0;
}