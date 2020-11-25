// Ordenar alunos em ordem crescente de idade

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    int matricula;
    int dia;
    int mes;
    int ano;
    char nome[200];
} Aluno;


int ComparaDataNasc(Aluno a, Aluno b){ // Quer retornar 1 quando a > b, ou seja a possuir maior idade
    if(a.ano < b.ano) return 1;
    else if(a.mes < b.mes && a.ano < b.ano) return 1;
    else if(a.dia <= b.dia && a.mes <= b.mes && a.ano <= b.ano) return 1;
    return 0; // Se nenhuma das condicoes foi satisfeita entao A nao possui maior idade
}

void OrdenarAlunosCrescente(Aluno *a, int n){
    int i, j;
    Aluno aux;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(ComparaDataNasc(a[j], a[j+1])){
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", a[i].matricula, a[i].nome, a[i].dia, a[i].mes, a[i].ano);
    }

}

int main(){
    int n;
    scanf("%d", &n);

    Aluno *a;
    a = (Aluno*) malloc(n * sizeof(Aluno));

    int i;
    for(i=0; i<n; i++){
        scanf("%d %d %d %d", &a[i].matricula, &a[i].dia, &a[i].mes, &a[i].ano);
        getchar();
        gets(a[i].nome);
    }

    OrdenarAlunosCrescente(a, n);

    free(a);

    return 0;
}