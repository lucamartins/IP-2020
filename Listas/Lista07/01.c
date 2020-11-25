#include <stdio.h>

char calcular_media(double n1, double n2, double n3){
      double m = (n1+n2+n3)/3;

      if(m <= 6.99) return 'C';
      else if(m <= 8.99) return 'B';
      else return 'A';
}

int main(){

      double n1, n2, n3;
      scanf("%lf %lf %lf", &n1, &n2, &n3);

      printf("%c\n", calcular_media(n1, n2, n3));

      return 0;
}