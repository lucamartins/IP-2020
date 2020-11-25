#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
    int codigo;
    double valor_credito;
    char nome_curso[100];
} Cursos;
 
typedef struct {
    char nome_aluno[500];
    int codigo_curso;
    int qnt_creditos;
} Alunos;
 
 
void calculo(int N, int M, Alunos *alunos, Cursos *cursos){
    int i, j;
    double mensalidade;
    char nome_curso[100];

    for(i=0; i<M; i++){
        // Verificar curso do aluno
        for(j=0; j<N; j++){
                if(alunos[i].codigo_curso == cursos[j].codigo){
                    mensalidade = cursos[j].valor_credito * alunos[i].qnt_creditos;
                    strcpy(nome_curso, cursos[j].nome_curso);
                    break;
                }
        }

        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", alunos[i].nome_aluno, nome_curso, alunos[i].qnt_creditos, cursos[j].valor_credito, mensalidade);
    }
}
 
 
int main(){
    int N, M, i;
    scanf("%d", &N);

    Cursos *cursos;
    cursos = (Cursos*) malloc (N * sizeof(Cursos));


    for(i=0; i<N; i++){
        scanf("%d", &cursos[i].codigo);
        scanf("%lf", &cursos[i].valor_credito);

        getchar();
        fgets(cursos[i].nome_curso, sizeof(cursos[i].nome_curso), stdin);
        cursos[i].nome_curso[strlen(cursos[i].nome_curso)-1] = 0;
    }

    scanf("%d", &M);

    Alunos *alunos;
    alunos = (Alunos*) malloc(M * sizeof(Alunos));

    for(i=0; i<M; i++){
        getchar();
        fgets(alunos[i].nome_aluno, sizeof(alunos[i].nome_aluno), stdin);
        alunos[i].nome_aluno[strlen(alunos[i].nome_aluno)-1] = 0;

        scanf("%d", &alunos[i].codigo_curso);
        scanf("%d", &alunos[i].qnt_creditos);
    }

    calculo(N, M, alunos, cursos);

    free(cursos);
    free(alunos);

    return 0;
}