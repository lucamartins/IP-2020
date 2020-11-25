#include <stdio.h>

int main(){
      int A, B, C;
      scanf("%d %d %d", &A, &B, &C);

      if(B > A){
            int aux = A;
            A = B;
            B = aux;
      }
      if(C > A){
            int aux = A;
            A = C;
            C = aux;
      }

      if(A > 0 && B > 0 && C > 0){
            if(A*A < B*B + C*C){
                  printf("acutangulo\n");
            }
            else if(A*A == B*B + C*C){
                  printf("retangulo\n");
            }
            else if(A*A > B*B + C*C){
                  printf("obtusangulo\n");
            }
      }
      else{
            printf("triangulo invalido\n");
      }

      return 0;
}