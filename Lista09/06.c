#include<stdio.h>

void sort_array(int *v, int t){
      for(int i=0; i<t; i++){
            for(int j=i+1; j<t; j++){
                  if(*(v+j) < *(v+i)){
                        int temp = *(v+i);
                        *(v+i) = *(v+j);
                        *(v+j) = temp;
                  }
            }
      }
}

int main(){
      int v[10];
      
      for(int i=0; i<10; i++){
            scanf("%d", &v[i]);                  
      }

      sort_array(v, 10);

      printf("Menor valor = %d\n", v[0]);
      printf("Maior valor = %d\n", v[9]);

      return 0;
}