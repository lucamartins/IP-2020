#include <stdio.h>

int main (){
      double s, sn, au;
      int pc;
      scanf("%lf", &s);

      if(s <= 280){
            sn = s * 1.2;
            au = s * 0.2;
            pc = 20;
      }
      else if(s < 700){
            sn = s * 1.15;
            au = s * 0.15;
            pc = 15;
      }
      else if(s < 1500){
            sn = s * 1.1;
            au = s * 0.1;
            pc = 10;
      }
      else{
            sn = s * 1.05;
            au = s * 0.05;
            pc = 5;
      }

      printf("Salario antes = R$%.2lf\n", s);
      printf("Percentual do aumento aplicado = %d\n", pc);
      printf("Valor do aumento = R$%.2lf\n", au);
      printf("Novo salario = R$%.2lf\n", sn);

      return 0;
}