#include <stdio.h>
#define mINF -1e9

int main(){
      int m[6][6];
      int somatorio=mINF, aux=0;

      int i, j;
      for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                  scanf("%d", &m[i][j]);
            }
      }

      for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                  aux = m[i][j] + m[i][j+1] + m[i][j+2] + m[i+1][j+1] + m[i+2][j] + m[i+2][j+1] + m[i+2][j+2];

                  if(aux > somatorio){
                        somatorio = aux;
                        aux = 0;
                  }
            }
      }

      printf("%d\n", somatorio);

      return 0;
}