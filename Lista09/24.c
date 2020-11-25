#include<stdio.h>

int main(){
      int v[10];

      for(int i=0; i<10; i++){
            scanf("%d", &v[i]);
      }

      int v1[10], v2[10];
      int cntv1=0, cntv2=0;

      for(int i=0; i<10; i++){
            if(v[i] % 2 == 0){
                  v2[cntv2] = v[i];
                  cntv2++;
            }
            else{
                  v1[cntv1] = v[i];
                  cntv1++;
            }
      }


      for(int i=0; i<cntv1; i++){
            printf("%d ", v1[i]);
      }
      printf("\n");

      for(int i=0; i<cntv2; i++){
            printf("%d ", v2[i]);
      }
      printf("\n");

      return 0;
}