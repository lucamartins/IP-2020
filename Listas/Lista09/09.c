#include<stdio.h>

int main(){

      int v[6], temp, cnt=0;
      
      for(int i=0; i<6; i++){
            scanf("%d", &temp);

            if(temp%2 == 0){
                  v[cnt] = temp;
                  cnt++;
            }
      }

      for(int i=0; i<cnt; i++){
            printf("%d ", v[i]);
      }
      printf("\n");

      return 0;
}