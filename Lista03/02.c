#include <stdio.h>

int main(){
      double v;
      scanf("%lf", &v);

      if(v < 20){
            double vv = v * 1.45;
            printf("Valor de venda = R$%.2lf.\n", vv);
      }
      else{
            double vv2 = v * 1.3;
            printf("Valor de venda = R$%.2lf.\n", vv2);
      }

      return 0;
}