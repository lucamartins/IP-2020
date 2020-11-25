#include <stdio.h>

int main(){
      int N;
      int m[1005][1005];

      scanf("%d", &N);

      int i, j;
      for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                  scanf("%d", &m[i][j]);
            }
      }


      for(i=0, j=N-1; i<N, j>=0; i++, j--){
            printf("%d\n", m[i][j]);
      }



      return 0;
}