#include<stdio.h>

int main(){
      int v[10], v2[10], cnt=0;

      for(int i=0; i<10; i++) scanf("%d", &v[i]);

      for(int i=0; i<10; i++){
            if( (v[i] % 2) != 0){
                  v2[cnt] = v[i];
                  cnt++;
            }
      }

      int aux=0;
      printf("Vetor de entrada:\n");
      for(int i=0; i<10; i++){
            printf("%d ", v[i]);
            aux++;

            if(aux==2){
                  printf("\n");
                  aux=0;
            }
      }

      aux=0;
      printf("\nVetor dos impares:\n");
      for(int i=0; i<cnt; i++){
            printf("%d ", v2[i]);
            aux++;

            if(aux==2){
                  printf("\n");
                  aux=0;
            }
      }


      return 0;
}