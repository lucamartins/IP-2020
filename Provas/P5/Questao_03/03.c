#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct {
    char matricula[60];
    char sobrenome[60];
    int ano_nasc;
} Aluno ;

int main(){
    int N, i;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &N);

    Aluno *alunos = malloc(N * sizeof(Aluno));

    FILE *fp = fopen("alunos.txt", "w");

    for(i=0; i<N; i++){
        printf("Insira a matricula, sobrenome e ano de nascimento do aluno [ %d ] separado por espacos: ", i);
        scanf("%s %s %d", alunos[i].matricula, alunos[i].sobrenome, &alunos[i].ano_nasc);

        fprintf(fp, "%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano_nasc);
    }

    free(alunos);
    fclose(fp);


    return 0;
}