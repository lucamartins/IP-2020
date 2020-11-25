#include<stdio.h>

int main(){
      int v[6], pares[6], cntpares=0, somaPares=0, impares[6], cntimpares=0;

      for(int i=0; i<6; i++){
            scanf("%d", &v[i]);      
                  
            if(v[i] % 2 == 0){
                  pares[cntpares] = v[i];
                  somaPares += v[i];
                  cntpares++;
            }

            else{
                  impares[cntimpares] = v[i];
                  cntimpares++;
            }
      }

      printf("Numeros pares: ");
      for(int i=0; i<cntpares; i++){
            printf("%d ", pares[i]);
      }
      printf("\nSoma dos numeros pares = %d\n", somaPares);

      printf("Numeros impares: ");
      for(int i=0; i<cntimpares; i++){
            printf("%d ", impares[i]);
      }
      printf("\nQuantidade de numeros impares = %d\n", cntimpares);

      return 0;
}