#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int a;
    int b;
} Fracao;

int reduzir_e_verificar_equivalencia(int a, int b, int c, int d){
    int i;
    int menor;

    // Reduzir primeira fracao a/b
    menor = a >= b ? b : a;

    if(menor >= 0){
        for(i=2; i<=menor; i++){
            if((a)%i==0 && (b)%i==0){
                while((a)%i==0 && (b)%i==0){
                    a /= i;
                    b /= i;
                }
            }
        }
    }
    else{
        for(i=-2; i>=menor; i--){
            if((a)%i==0 && (b)%i==0){
                while((a)%i==0 && (b)%i==0){
                    a /= i;
                    b /= i;
                }
            }
        }
        a = -a;
        b = -b;
    }

    // Reduzir segunda fracao c/d
    menor = c >= d ? d : c;

    if(menor >= 0){
        for(i=2; i<=menor; i++){
            if((c)%i==0 && (d)%i==0){
                while((c)%i==0 && (d)%i==0){
                    c /= i;
                    d /= i;
                }
            }
        }
    }
    else{
        for(i=-2; i>=menor; i--){
            if((c)%i==0 && (d)%i==0){
                while((c)%i==0 && (d)%i==0){
                    c /= i;
                    d /= i;
                }
            }
        }
        c = -c;
        d = -d;
    }

    if(a == c && b == d) return 1;
    return 0;
}

void analise(Fracao *fracao, int N, int num_caso){
    int qnt=0;

    printf("Caso de teste %d\n", num_caso+1);

    int i, j;
    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            if(reduzir_e_verificar_equivalencia(fracao[i].a, fracao[i].b, fracao[j].a, fracao[j].b)){
                qnt++;
                printf("%d/%d equivalente a %d/%d\n", fracao[i].a, fracao[i].b, fracao[j].a, fracao[j].b);
            }
        }
    }

    if(qnt==0){
        printf("Nao ha fracoes equivalentes na sequencia\n");
    }

}

int main(){
    int C, N, i, j;
    char barra;
    Fracao *fracao;

    scanf("%d", &C);

    for(i=0; i<C; i++){
        scanf("%d", &N);

        fracao = (Fracao*) malloc(N * sizeof(Fracao));

        for(j=0; j<N; j++){
            scanf("%d %c %d", &fracao[j].a, &barra, &fracao[j].b);
        }

        analise(fracao, N, i);

        free(fracao);
    }

    printf("\n");

    return 0;
}