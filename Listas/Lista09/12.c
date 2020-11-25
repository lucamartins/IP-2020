#include<stdio.h>

void sort_array(int *v, int t){
      for(int i=0; i<t; i++){
            for(int j=i+1; j<t; j++){
                  if(*(v+j) < *(v+i)){
                        int temp = *(v+i);
                        *(v+i) = *(v+j);
                        *(v+j) = temp;
                  }
            }
      }
}

int main(){
      int v[5];
      double media=0;
      
      for(int i=0; i<5; i++){
            scanf("%d", &v[i]);
            media += v[i];                  
      }
      media /= 5;

      sort_array(v, 5);

      printf("Valores: ");
      for(int i=0; i<5; i++) printf("%d ", v[i]);
      printf("\n");

      printf("Menor valor = %d\n", v[0]);
      printf("Maior valor = %d\n", v[4]);
      printf("Media dos valores = %.2lf.\n", media);

      return 0;
}