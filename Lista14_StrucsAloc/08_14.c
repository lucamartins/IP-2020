#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    int a;
    int b;
} tRacional;


int MDC(int a, int b){
    int i, MDC, menor_numero;

    menor_numero = a >= b ? b : a;
    if(menor_numero < 0){
        menor_numero = menor_numero * (-1);
    }

    for(i=1; i<=menor_numero; i++){
        if(a%i==0 && b%i==0){
            MDC = i;
        }
    }
    return MDC;
}


int MMC(int b1, int b2){
    int i;
    int maior = b1 >= b2 ? b1 : b2;

    for(i=maior; ; i++){
        if(i%b1==0 && i%b2==0){
            return i;
        }
    }
}


void reduzir_fracao(tRacional *r){    
    int mdc = MDC(r->a, r->b);

    r->a = r->a / mdc;
    r->b = r->b / mdc;
}


tRacional retorna_racional(int a, int b){
    tRacional numero;
    numero.a = a;
    numero.b = b;
    return numero;
}

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
    r2.a = -(mmc/r2.b) * r2.a;

    r1.b = mmc;
    r2.b = mmc;

    res_sub.a = r1.a + r2.a;
    res_sub.b = mmc;

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