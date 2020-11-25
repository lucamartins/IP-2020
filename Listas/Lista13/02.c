#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {
    char nome[200];
    double peso;
    double altura;
} Pessoa;

void IMC(Pessoa *p){
    int i;
    for(i=0; i<5; i++){
        printf("%.2lf\n", p[i].peso / pow(p[i].altura, 2));
    }
}

int main(){
    Pessoa p[5];

    int i;
    for(i=0; i<5; i++){
        gets(p[i].nome);
        scanf("%lf", &p[i].peso);
        scanf("%lf", &p[i].altura);

        getchar();
    }

    IMC(p);

    return 0;
}