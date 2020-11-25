#include <stdio.h>

int main(){
      int N, somaPares=0, somaImpares=0;
      
      while(N < 1000){
            scanf("%d", &N);
            if(N > 1000){
                  break;
            }

            if(N%2 == 0){
                  somaPares += N;
            }
            else{
                  somaImpares += N;
            }
      }

      printf("Soma dos pares = %d\n", somaPares);
      printf("Soma dos impares = %d\n", somaImpares);

      return 0;
}