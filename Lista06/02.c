#include <stdio.h>

int main(){

      int N=0, cnt1=0, cnt2=0, cnt3=0, cnt4=0;

      while(scanf("%d", &N) && N >= 0){
            if(N <= 25){
                  cnt1++;
            }
            else if(N <= 50){
                  cnt2++;
            }
            else if(N <= 75){
                  cnt3++;
            }
            else if(N <= 100){
                  cnt4++;
            }
      }

      printf("Foi lido entre o intervalo 0-25 %d numero(s).\n", cnt1);
      printf("Foi lido entre o intervalo 26-50 %d numero(s).\n", cnt2);
      printf("Foi lido entre o intervalo 51-75 %d numero(s).\n", cnt3);
      printf("Foi lido entre o intervalo 76-100 %d numero(s).\n", cnt4);

      return 0;
}