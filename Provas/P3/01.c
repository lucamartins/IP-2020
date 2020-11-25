#include <stdio.h>

int main(){
    int v[1005];
    int qntAntes=0, qntDepois=0;

    int par;

    int N;
    scanf("%d", &N);

    double media=0;

    int i;
    for(i=0; i<N; i++){
        scanf("%d", &v[i]);
        media += v[i];
    }
    media /= N;

    if(N <= 5){
        printf("QUANTIDADE DE ELEMENTOS INVALIDOS!\n");
        return 1;
    }

    if(N%2 == 0){
        par = 1;
    }
    else{
        par = 0;
    }

    if(par){
        for(i=0; i<N; i++){
            if(v[i] > media){
                if(i<(N/2)){ 
                    qntAntes++;
                }
                else if(i >= N/2){
                    qntDepois++;
                }
            }
        }
    }
    else{
        for(i=0; i<N; i++){
            if(v[i] > media){
                if(i == N/2){
                    continue;
                }

                if(i<(N/2)){
                    qntAntes++;
                }
                else if(i>(N/2)){
                    qntDepois++;
                }
            }
        }
    }

    printf("%.2lf %d %d ", media, qntAntes, qntDepois);


    if(qntAntes > qntDepois){
        printf("PRIMEIRA METADE\n");
    }
    else if(qntAntes == qntDepois){
        printf("EMPATE\n");
    }
    else{
        printf("SEGUNDA METADE\n");
    }


    return 0;
}