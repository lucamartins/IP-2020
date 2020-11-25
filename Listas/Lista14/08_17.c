#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    int a;
    int b;
} tRacional;

// Reduzir fracao
void reduzir_fracao(tRacional *r){
    int i;
    int menor = r->a >= r->b ? r->b : r->a;

    if(menor >= 0){
        for(i=2; i<=menor; i++){
            if((r->a)%i==0 && (r->b)%i==0){
                while((r->a)%i==0 && (r->b)%i==0){
                    r->a /= i;
                    r->b /= i;
                }
            }
        }
    }
    else{
        for(i=-2; i>=menor; i--){
            if((r->a)%i==0 && (r->b)%i==0){
                while((r->a)%i==0 && (r->b)%i==0){
                    r->a /= i;
                    r->b /= i;
                }
            }
        }
        r->a = -r->a;
        r->b = -r->b;
    }
}

// Recebe A e B e retorna a struct com o racional
tRacional retorna_racional(int a, int b){
    tRacional numero;
    numero.a = a;
    numero.b = b;
    return numero;
}

// Calcular MDC entre A e B
int MDC(int a, int b){
    int i;
    int MDC;
    int menor_numero = a >= b ? b : a;

    for(i=0; i<menor_numero; i++){
        if(i%a==0 && i%b==0){
            MDC = i;
        }
    }
    return MDC;
}

// Calculo do MMC entre os denominadores
int MMC(int b1, int b2){
    int i;
    int maior = b1 >= b2 ? b1 : b2;

    for(i=maior; ; i++){
        if(i%b1==0 && i%b2==0){
            return i;
        }
    }
}


//
// Agora sim comecam os calculos propriamente ditos: +, -, *, /
//

tRacional soma(tRacional r1, tRacional r2){
    tRacional res_soma;
    int mmc = MMC(r1.b, r2.b);

    r1.a = (mmc/r1.b) * r1.a;
    r2.a = (mmc/r2.b) * r2.a;

    r1.b = mmc;
    r2.b = mmc;

    res_soma.a = r1.a + r2.a;
    res_soma.b = mmc;

    reduzir_fracao(&res_soma);

    printf("%d %d\n", res_soma.a, res_soma.b);

    return res_soma;
}

tRacional sub(tRacional r1, tRacional r2){
    tRacional res_sub;
    int mmc = MMC(r1.b, r2.b);

    r1.a = (mmc/r1.b) * r1.a;
    r2.a = (mmc/r2.b) * r2.a;

    r1.b = mmc;
    r2.b = mmc;

    res_sub.a = (r1.a - r2.a) * (-1);
    res_sub.b = mmc * (-1);

    reduzir_fracao(&res_sub);

    printf("%d %d\n", res_sub.a, res_sub.b);

    return res_sub;
}

tRacional mult(tRacional r1, tRacional r2){
    tRacional res_mult;

    res_mult.a = r1.a * r2.a;
    res_mult.b = r1.b * r2.b;

    reduzir_fracao(&res_mult);

    printf("%d %d\n", res_mult.a, res_mult.b);

    return res_mult;
}

tRacional divisao(tRacional r1, tRacional r2){
    tRacional res_div;

    res_div.a = r1.a * r2.b;
    res_div.b = r1.b * r2.a;

    reduzir_fracao(&res_div);

    printf("%d %d\n", res_div.a, res_div.b);

    return res_div;
}

int main(){
    char op;
    int a,b,c,d;

    tRacional n1, n2;
    
    while(scanf("%d %d %c %d %d", &a, &b, &op, &c, &d) != EOF){
        n1 = retorna_racional(a, b);
        n2 = retorna_racional(c, d);

        if(op == '+'){
            soma(n1, n2);
        }
        else if(op == '-'){
            sub(n1, n2);
        }
        else if(op == '*'){
            mult(n1, n2);
        }
        else if(op == '/'){
            divisao(n1, n2);
        }
    }

    return 0;
}