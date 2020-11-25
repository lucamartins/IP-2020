// Alteracao por funcao
#include <stdio.h>

void troca_valor(int *px, int *py){
      int temp = *px;
      *px = *py;
      *py = temp;
}

int main(){
      int x, y, *px = &x, *py = &y;
      scanf("%d %d", &x, &y);

      troca_valor(px, py);

      printf("Os valores de A e B sao: %d %d\n", x, y);

      return 0;
}