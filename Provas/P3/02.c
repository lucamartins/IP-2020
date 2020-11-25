#include <stdio.h>

int ehPermutacao(int matriz[500][500], int n, int *soma){
    int qntDif=0;

    int i, j;

    // Checar linhas
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(matriz[i][j] != 0){
                qntDif++;
            }
        }

        if(qntDif > 1){
            return 0;
        }
        else{
            qntDif = 0;
        }

    }

    // Checar colunas
    for(j=0; j<n; j++){
        for(i=0; i<n; i++){
            if(matriz[i][j] != 0){
                qntDif++;
            }
        }

        if(qntDif > 1){
            return 0;
        }
        else{
            qntDif = 0;
        }
    }

    return 1;
}

int main(){
    int n;
    scanf("%d", &n);

    int matriz[500][500];
    int soma=0;

    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    int *psoma=&soma;

    if(ehPermutacao(matriz, n, soma)){
        printf("%d\n", n);
        printf("PERMUTACAO\n");
        printf("%d\n", soma);
    }
    else{
        printf("%d\n", n);
        printf("NAO EH PERMUTACAO\n");
        printf("%d\n", soma);
    }
    

    return 0;
}

