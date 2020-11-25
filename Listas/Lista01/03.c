#include <stdio.h>

int main(){
    double TxFixaDia=0, TxPorKm=0, dias=0, kms=0;

    printf("Digite, respectivamente, a taxa fixa por dia, a taxa por km rodado, o numero de dias e o total de kms rodados: ");
    scanf("%lf %lf %lf %lf", &TxFixaDia, &TxPorKm, &dias, &kms);

    double aluguel = dias*TxFixaDia*0.9 + kms*TxPorKm;
    double desconto = dias*TxFixaDia*0.1;

    printf("Valor total aluguel = %.2lf reais.\nDesconto fornecido = %.2lf reais.\nNumero de dias = %.1lf.\nKilometragem = %.1lf kilometros.\n", aluguel, desconto, dias, kms);

}