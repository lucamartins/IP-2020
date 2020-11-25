#include<stdio.h>

int main(){
      double v[5];

      for(int i=0; i<5; i++) scanf("%lf", &v[i]);

      int cod;
      scanf("%d", &cod);

      if(cod == 0){
            return 0;
      }

      else if(cod == 1){
            for(int i=0; i<5; i++){
                  printf("%.2lf ", v[i]);
            }
            printf("\n");
      }

      else if(cod == 2){
            for(int i=4; i>=0; i--) printf("%.2lf ", v[i]);
            printf("\n");
      }

      else{
            printf("Codigo informado invalido.\n");
      }

      return 0;
}