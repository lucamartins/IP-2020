#include <stdio.h>

int main(){
    int v;

    printf("Digite um valor em metros para ser convertido para centimetros: ");
    scanf("%d", &v);

    printf("%dm = %dcm\n", v, v*100);

    return 0;
}