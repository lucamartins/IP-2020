#include <stdio.h>

int main(){
      int m, n, anterior=1, num=1, primeiro_anterior=0;

      scanf("%d %d", &m, &n);

      int i, j;
      for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                  if(anterior == 0){
                        printf("%d", num++);
                        anterior = 1;
                  }
                  else{
                        printf("0");
                        anterior = 0;
                  }
                  if(j < n-1) printf(" ");
            }
            if(primeiro_anterior == 0){
                  anterior = 0;
                  primeiro_anterior = 1;
            }
            else{
                  anterior = 1;
                  primeiro_anterior = 0;
            }

            printf("\n");
      }


      return 0;
}