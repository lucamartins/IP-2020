#include<stdio.h>

int main(){
      int v[10], qntNeg=0, somaPos=0;
      
      for(int i=0; i<10; i++){
            scanf("%d", &v[i]);
            
            if(v[i] > 0) somaPos+=v[i];
            else if(v[i] < 0) qntNeg++;
      }

      printf("Quantidade de numeros negativos = %d.\n", qntNeg);
      printf("Soma dos numeros positivos = %d.\n", somaPos);

      return 0;
}