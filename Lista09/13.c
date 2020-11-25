#include<stdio.h>

int main(){
      int v[10];
      int v2[10];
      char v3[10];

      for(int i=0; i<10; i++){
            scanf("%d", &v[i]);   
            v2[i] = 0;
            v3[i] = 'o';           
      }

      for(int i=0; i<10; i++){
            for(int j=i+1; j<10; j++){
                  if(v[i] == v[j] && v3[i] == 'o' && v3[j] == 'o'){
                        v3[i] = 'x';
                        v2[i]++;
                        printf("Valor %d repetiu\n", v[i]);
                  }
            }
      }


      return 0;
}