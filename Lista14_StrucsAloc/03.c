#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double valores[4];
    double norma;
} Vetor;

void ordenar_por_norma(Vetor *vetor, int n){
    int i, j;
    Vetor aux;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(vetor[j].norma > vetor[j+1].norma){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int main(){
    int N, i;
    scanf("%d", &N);

    Vetor *vetor;
    vetor = (Vetor*) malloc (N * sizeof(Vetor));

    for(i=0; i<N; i++){
        scanf("%lf %lf %lf %lf", &vetor[i].valores[0], &vetor[i].valores[1], &vetor[i].valores[2], &vetor[i].valores[3]);
        vetor[i].norma = sqrt(vetor[i].valores[0]*vetor[i].valores[0] + vetor[i].valores[1]*vetor[i].valores[1] + vetor[i].valores[2]*vetor[i].valores[2] + vetor[i].valores[3]*vetor[i].valores[3]);
    }

    ordenar_por_norma(vetor, N);

    for(i=0; i<N; i++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", vetor[i].valores[0], vetor[i].valores[1], vetor[i].valores[2], vetor[i].valores[3], vetor[i].norma);
    }

    free(vetor);

    return 0;
}