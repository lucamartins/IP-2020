#include <stdio.h>

int main(){
      int m[10][10];
      int l=-1, c=-1;

      while(1){
            scanf("%d", &l);
            if(l > 0 && l < 11) break;
      }

      while(1){
            scanf("%d", &c);
            if(c > 0 && c < 11) break;
      }

      int i, j;
      for(i=0; i<l; i++){
            for(j=0; j<c; j++){
                  scanf("%d", &m[i][j]);
            }
      }

      for(i=0; i<l; i++){
            printf("linha %d: ", i+1);
            for(j=0; j<c; j++){
                  printf("%d", m[i][j]);
                  if(j < c-1){
                        printf(",");
                  }
            }
            printf("\n");
      }

      
}