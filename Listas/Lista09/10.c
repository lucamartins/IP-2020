#include<stdio.h>

int main(){

      int v[15], media=0;
      
      for(int i=0; i<15; i++){
            scanf("%d", &v[i]);
            media += v[i];
      }
      media /= 15;


      printf("Media geral = %d\n", media);
     
      return 0;
}