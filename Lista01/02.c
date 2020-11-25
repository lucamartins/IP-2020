#include <stdio.h>

int main(){
    int PAES=0, BROAS=0;

    printf("Digite a quantidade de paes: ");
    scanf("%d", &PAES);

    printf("Digite a quantidade de broas: ");
    scanf("%d", &BROAS);

    double ARRECADACAO = PAES * 0.12 + BROAS * 1.5;
    printf("A arrecadacao total foi de %.2lf reais. Sendo assim, deve ser guardado para a poupanca %.2lf reais.\n", ARRECADACAO, ARRECADACAO*0.1);


    return 0;
}