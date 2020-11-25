#include<stdio.h>

int main(){
      int a[10], b[10], c[10];

      for(int i=0; i<10; i++){
            scanf("%d", &a[i]);
      }
      for(int i=0; i<10; i++){
            scanf("%d", &b[i]);
      }

      for(int i=0; i<10; i++){
            if(i%2==0) c[i] = a[i];
            else c[i] = b[i];
      }

      printf("Vetor C:\n");
      for(int i=0; i<10; i++){
            printf("%d ", c[i]);
      }
      printf("\n");

      return 0;
}