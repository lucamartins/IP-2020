#include<stdio.h>

int main(){
      int v[10], pares=0;
      
      for(int i=0; i<10; i++){
            scanf("%d", &v[i]);
            if(v[i] % 2 == 0){
                  pares++;
            }
                  
      }
      
      printf("Quantidade de valores pares = %d\n", pares);
      
      for(int i=0; i<10; i++){
            if(v[i] % 2 == 0){
                  printf("%d ", v[i]);
            }
      }
      printf("\n");


      return 0;
}