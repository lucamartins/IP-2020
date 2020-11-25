// Soma dobro
#include <stdio.h>

void retornar_dobro(int *pa, int *pb){
      *pa = 2**pa;
      *pb = 2**pb;
}

int main(){
      int A, B;
      int *pa=&A, *pb=&B;
      
      scanf("%d %d", pa, pb);

      retornar_dobro(pa, pb);

      printf("O dobro dos valores de A e B sao: %d %d.\n", *pa, *pb);

      return 0;
}