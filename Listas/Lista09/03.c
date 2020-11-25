#include<stdio.h>

int main(){
      int v[10], v2[10];

      for(int i=0; i<10; i++){
            scanf("%d", &v[i]);
      }

      for(int i=0; i<10; i++){
            v2[i] = v[i] * v[i];
      }

      printf("Conjunto de entrada: ");
      for(int i=0; i<10; i++){
            printf("%d ", v[i]);
      }
      printf("\n");

      printf("Conjunto de saida: ");
      for(int i=0; i<10; i++){
            printf("%d ", v2[i]);
      }
      printf("\n");

      return 0;
}