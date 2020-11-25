#include<stdio.h>

int main(){
      int v[8];
      
      for(int i=0; i<8; i++){
            scanf("%d", &v[i]);
      }

      int x, y;
      scanf("%d %d", &x, &y);

      printf("Soma dos valores das posicoes %d e %d = %d\n", x, y, v[x] + v[y]);
      
      return 0;
}