#include <stdio.h>
#define INF 1e9

int main(){

      double N=0, media=0, min=INF, max=-INF, contador=0;

      while(scanf("%lf", &N) && N >= 0){
            contador++;
            media += N;
            
            if(N > max) max=N;
            if(N < min) min=N;
      }

      media /= contador;

      printf("Nota maxima = %.1lf\n", max);
      printf("Nota minima = %.1lf\n", min);
      printf("Media aritmetica = %.1lf\n", media);

      return 0;
}