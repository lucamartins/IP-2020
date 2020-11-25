#include <stdio.h>

int main(){
    int PESO = 0, EXCESSO = 0, MULTA = 0;

    do{
        if(PESO < 0){
            printf("Valor negativo, digite novamente.\n");
        }
        scanf("%d", &PESO);
    }while(PESO < 0);

    if(PESO>50){
        EXCESSO = PESO - 50;
        MULTA = EXCESSO * 4;
        printf("A multa a ser paga totaliza %d reais!\n", MULTA);
    }
    else{
        printf("O peso esta dentro dos limites. Nao ha multa a ser paga!\n");
    }

    return 0;
}