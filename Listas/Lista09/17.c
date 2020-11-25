#include<stdio.h>

int main(){
      int v[10], qnt=0;

      for(int i=0; i<10; i++) scanf("%d", &v[i]);

      int x; scanf("%d", &x);

      for(int i=0; i<10; i++){
            if(v[i] % x == 0){
                  qnt++;
                  printf("%d ", v[i]);
            }
      }
      printf("\n");

      printf("Total de multiplos = %d.\n", qnt);


      return 0;
}