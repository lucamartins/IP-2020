#include <stdio.h>

int verificar_paridade(int N){
      if(N % 2 == 0) return 1;
      else return 0;
}

int main(){

      int N;
      scanf("%d", &N);

      if(verificar_paridade(N) == 1){
            printf("%d eh par\n", N);
      }
      else{
            printf("%d eh impar\n", N);
      }

      return 0;
}