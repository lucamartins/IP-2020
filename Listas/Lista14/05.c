#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    double coord[4];
} Pontos;

void imprimir_distancia(Pontos *p){
    double dist;
    
    dist = sqrt(pow(p[0].coord[0]-p[1].coord[0], 2) + pow(p[0].coord[1]-p[1].coord[1], 2) + pow(p[0].coord[2]-p[1].coord[2], 2) + pow(p[0].coord[3]-p[1].coord[3], 2));

    printf("%.2lf\n", dist);
}

int main(){
    int N;
    scanf("%d", &N);

    Pontos *p;
    p = (Pontos*) malloc(2 * sizeof(Pontos));

    scanf("%lf%lf%lf%lf", &p[0].coord[0], &p[0].coord[1], &p[0].coord[2], &p[0].coord[3]);

    int i;
    for(i=1; i<N; i++){
        scanf("%lf%lf%lf%lf", &p[1].coord[0], &p[1].coord[1], &p[1].coord[2], &p[1].coord[3]);
        
        imprimir_distancia(p);

        p[0] = p[1];
    }

    free(p);

    return 0;
}