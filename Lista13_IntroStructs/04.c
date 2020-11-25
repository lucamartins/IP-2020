#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[200];
    int matricula;
    double mf;
} Aluno;

void dividir(Aluno *a){
    int i;
    Aluno aprovados[5], reprovados[5];
    int ap=0, rp=0;

    for(i=0; i<10; i++){
        if(a[i].mf >= 5){
            aprovados[ap++] = a[i];
        }
        else{
            reprovados[rp++] = a[i];
        }
    }

    printf("Aprovados:\n");
    for(i=0; i<ap; i++){
        printf("%s\n", aprovados[i]);
    }

    printf("Reprovados:\n");
    for(i=0; i<ap; i++){
        printf("%s\n", reprovados[i]);
    }
}

int main(){
    Aluno a[10];

    int i;
    for(i=0; i<10; i++){
        gets(a[i].nome);
        scanf("%d", &a[i].matricula);
        scanf("%lf", &a[i].mf);

        getchar();
    }

    dividir(a);

    return 0;
}