#include<stdio.h>

int main(){
      int v[10];

      for(int i=0; i<10; i++){
            int temp;
            scanf("%d", &temp);

            if(temp > 0) v[i] = temp;
            else v[i] = 0;
      }

      for(int i=0; i<10; i++) printf("%d ", v[i]);
      printf("\n");

      return 0;
}