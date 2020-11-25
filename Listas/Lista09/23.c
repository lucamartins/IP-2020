#include<stdio.h>

int main(){
      int v[100], cnt=0, num=0;

      while(cnt < 100){
            if( (num%7 != 0) || (num%10 == 7) ){
                  v[cnt] = num;
                  cnt++;
            }
            num++;
      }

      for(int i=0; i<100; i++){
            printf("%d ", v[i]);
      }
      printf("\n");

      return 0;
}