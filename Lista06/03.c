#include <stdio.h>

int main(){

      double numeros[10];

      for(int i=0; i<10; i++){
            scanf("%lf", &numeros[i]);
      }

      for(int i=0; i<10; i++){
            printf("%.2lf / 2 = %.2lf\n", numeros[i], numeros[i]/2);
      }

      return 0;
}