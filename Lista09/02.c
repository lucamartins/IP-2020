#include<stdio.h>

int main(){
      int v[6];
      
      for(int i=0; i<6; i++){
            scanf("%d", &v[i]);
      }

      for(int i=0; i<6; i++){
            printf("%d ", v[i]);
      }

      return 0;
}