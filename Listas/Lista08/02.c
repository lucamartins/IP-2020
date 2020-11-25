// Maior endereco
#include <stdio.h>

int main(){
      int i, j;
      scanf("%d %d", &i, &j);

      printf("O maior endereco e: %x\n", &i > &j ? &i : &j);

      return 0;
}