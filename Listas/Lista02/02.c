#include <stdio.h>

int main(){
    int g, h;

    printf("Quanto voce ganhar por hora?\n");
    scanf("%d", &g);

    printf("Quantas horas voce trabalha por mes?\n");
    scanf("%d", &h);

    printf("Em um mes, o seu salario e igual a %d reais.\n", g*h);

    return 0;
}