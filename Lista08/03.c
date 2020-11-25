// Maior valor endereco
#include <stdio.h>

int main(){
      int i, j; 
      scanf("%d %d", &i, &j);

      printf("O conteudo da variavel de maior endereco e %d\n", &i > &j ? i : j);

      return 0;
}