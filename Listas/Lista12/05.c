#include <stdio.h>

int main(){
      int anterior=0, primeiro_linha_anterior=1;
      int l, c;
      scanf("%d %d", &l, &c);

      int i, j;
      for(i=0; i<l; i++){
            for(j=0; j<c; j++){
                  if(anterior == 0){
                        printf("1");
                        anterior = 1;
                  }
                  else{
                        printf("0");
                        anterior = 0;
                  }
            }
            if(primeiro_linha_anterior == 0){
                  anterior = 0;
                  primeiro_linha_anterior = 1;
            }
            else{
                  anterior = 1;
                  primeiro_linha_anterior = 0;
            }

            printf("\n");
      }


      return 0;
}