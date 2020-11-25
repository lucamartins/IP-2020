// Altera valores com ponteiro
#include <stdio.h>

int main(){
      int i; double d; char c;
      int *ip; double *dp; char *cp;
      ip = &i; dp = &d; cp = &c;

      printf("Digite um inteiro, um real e um caracter: ");
      scanf("%d %lf %c", &i, &d, &c);

      printf("Valores antes da alteracao:\n");
      printf("inteiro: %d\n", *ip);
      printf("real: %.2lf\n", *dp);
      printf("char: %c\n", *cp);

      *ip = 99; *dp = 99.95; *cp = 'c';

      printf("Valores apos a alteracao:\n");
      printf("inteiro: %d\n", *ip);
      printf("real: %.2lf\n", *dp);
      printf("char: %c\n", *cp);

      return 0;
}