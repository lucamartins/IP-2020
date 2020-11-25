#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[200];
    int codigo;
    double preco;
} Produto;

void imprimir(Produto *p){
    int i;
    for(i=0; i<10; i++){
        printf("%s\n", p[i].nome);
        printf("%d\n", p[i].codigo);
        printf("%.2lf\n", p[i].preco);
    }
}

void consulta(Produto *p, int codigo){
    int i;
    for(i=0; i<10; i++){
        if(p[i].codigo == codigo){
            printf("%s\n", p[i].nome);
            printf("%.2lf\n", p[i].preco);
        }
    }
}

int main(){
    Produto p[10];

    int i;
    for(i=0; i<10; i++){
        gets(p[i].nome);
        scanf("%d", &p[i].codigo);
        scanf("%.2lf", &p[i].preco);

        getchar();
    }

    return 0;
}