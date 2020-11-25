#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    double coeficiente;
    int expoente;
} Termos;

void realizar_op(Termos *t1, Termos *t2, int n1, int n2, char sinal_op, int maior_exp){
    int i, e;
    Termos res;

    for(e=maior_exp; e>=0; e--){
        res.coeficiente = 0;
        res.expoente = 0;
        
        for(i=0; i<n1; i++){
            if(t1[i].expoente == e){
                res.coeficiente += t1[i].coeficiente;
            }
            else if(t1[i].expoente < e){
                break;
            }
        }

        for(i=0; i<n2; i++){
            if(t2[i].expoente == e){
                if(sinal_op == '+'){
                    res.coeficiente += t2[i].coeficiente;
                }
                else{
                    res.coeficiente -= t2[i].coeficiente;
                }
            }
            else if(t2[i].expoente < e){
                break;
            }
        }

        if(e != 0){
            if(res.coeficiente > 0){
                printf("+%.2lfX^%d", res.coeficiente, e);
            }
            else if(res.coeficiente < 0){
                printf("%.2lfX^%d", res.coeficiente, e);
            }
        }
        else{
            if(res.coeficiente > 0){
                printf("+%.2lf", res.coeficiente);
            }
            else if(res.coeficiente < 0){
                printf("%.2lf", res.coeficiente);
            }
        }
    }

    printf("\n");
}

int main(){
    int N, i, j;
    scanf("%d", &N);

    int n1, n2;
    Termos *t1, *t2;
    char sinal_op;
    int maior_exp;

    for(i=0; i<N; i++){
        maior_exp = 0;
        getchar();
        scanf("%c", &sinal_op);

        // Ler o primeiro polinomio
        scanf("%d", &n1);
        t1 = (Termos*) malloc(n1 * sizeof(Termos));
        for(j=0; j<n1; j++){
            scanf("%lf %d", &t1[j].coeficiente, &t1[j].expoente);
            if(t1[j].expoente > maior_exp) maior_exp = t1[j].expoente;
        }
    
        // Ler o segundo polinomio
        scanf("%d", &n2);
        t2 = (Termos*) malloc(n2 * sizeof(Termos));
        for(j=0; j<n2; j++){
            scanf("%lf %d", &t2[j].coeficiente, &t2[j].expoente);
            if(t2[j].expoente > maior_exp) maior_exp = t2[j].expoente;
        }

        realizar_op(t1, t2, n1, n2, sinal_op, maior_exp);

        free(t1);
        free(t2);

    }


    return 0;
}