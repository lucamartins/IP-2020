#include <stdio.h>

int main(){
      int m[1005][1005], mt[1005][1005];
      int N; scanf("%d", &N);
      int traco=0;

      // Lendo a matriz principal e ja somando o traco
      int i, j;
      for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                  scanf("%d", &m[i][j]);

                  if(i==j){
                        traco += m[i][j];
                  }
            }
      }

      // Construindo matriz transposta
      for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                  mt[i][j] = m[j][i];
            }
      }

      // Multiplicando principal por traco e somando com transposta
      for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                  printf("%d", (m[i][j]*traco)+mt[i][j]);

                  if(j < N-1) printf(" ");
            }
            printf("\n");
      }

      return 0;
}