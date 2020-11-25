#include<stdio.h>

int main(){
      int v[20];
      char vCheck[20];

      for(int i=0; i<20; i++) scanf("%d", &v[i]);

      for(int i=0; i<20; i++){
            for(int j=i+1; j<20; j++){
                  if(v[i] == v[j]){
                        vCheck[j] = 'x';
                  }
            }
      }

      for(int i=0; i<20; i++){
            if(vCheck[i] != 'x'){
                  printf("%d ", v[i]);
            }
      }
      printf("\n");


      return 0;
}