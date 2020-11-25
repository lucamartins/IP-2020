#include <stdio.h>

int verificar_borda(int i, int j, int l, int c, int lb){
      if(i <= l - i){
            if(i < lb) return 1;
      }
      else{
            if(l - i <= lb) return 1;
      }
      
      if(j <= c - j){
            if(j < lb) return 1;
      }
      else{
            if(c - j <= lb) return 1;
      }

      return 0;
}

int main(){
      int m[105][105];
      int l, c, lb, valorB;

      scanf("%d %d %d %d", &l, &c, &lb, &valorB);

      printf("P2\n");
      printf("%d %d\n", l, c);
      printf("255\n");

      int i, j;
      for(i=0; i<l; i++){
            for(j=0; j<c; j++){
                  if(verificar_borda(i, j, l, c, lb)){
                        printf("%d", valorB);
                        if(j < c-1) printf(" ");
                  }
                  else{
                        printf("0");
                        if(j < c-1) printf(" ");
                  }
            }
            printf("\n");
      }


      return 0;
}