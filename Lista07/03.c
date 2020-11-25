#include <stdio.h>

int verificar_sinal(int N){
      if(N < 0) return -1;
      else if(N == 0) return 0;
      else return 1;
}

int main(){
      int N;
      scanf("%d", &N);

      int aux = verificar_sinal(N);

      
      if(aux == 1){
            printf("%d eh positivo\n", N);
      }
      else if(aux == 0){
            printf("%d eh nulo\n", N);
      }
      else{
            printf("%d eh negativo\n", N);
      }
      
      return 0;
}