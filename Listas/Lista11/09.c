#include <stdio.h>
#include <string.h>

void imprimir(int x, int y){
      char saida[10];

      int i;
      for(i=x; i<=y; i++){
            sprintf(saida, "%d", i);
            printf("%s", saida);
      }

      for(i=y; i>=x; i--){
            sprintf(saida, "%d", i);

            char aux;
            int a, b;
            for(a=0, b=strlen(saida)-1; a<b; a++, b--){
                  aux = saida[a];
                  saida[a] = saida[b];
                  saida[b] = aux;

            }

            printf("%s", saida);
      }
}

int main(){
      int N;
      scanf("%d", &N);

      int x,y;

      int i;
      for(i=0; i<N; i++){
            scanf("%d %d", &x, &y);
            imprimir(x, y);
            printf("\n");
      }

      return 0;
}