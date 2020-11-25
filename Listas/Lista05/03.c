#include <stdio.h>

int main(){
      int x, y, z;
      scanf("%d %d %d", &x, &y, &z);

      int maior = x > y ? x : y;
      maior = maior > z ? maior : z;

      printf("o maior numero eh %d\n", maior);
      
      return 0;
}