// Inverte par e impar
#include <stdio.h>

void par_primeiro(int *px, int *py){
      if(*px % 2 == 0){
            return;            
      }
      else{
            int temp = *px;
            *px = *py;
            *py = temp;
            return;
      } 
}

int main(){
      int x, y, *px = &x, *py = &y;
      scanf("%d %d", px, py);

      par_primeiro(px, py);

      printf("%d %d\n", *px, *py);

      return 0;
}