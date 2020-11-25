#include <stdio.h>

int main(){
      double m[2][2];
      double ms[2][2];

      int i, j;
      for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                  scanf("%lf", &m[i][j]);
            }
      }

      ms[0][0] = m[0][0] * m[0][0] + m[0][1] * m[1][0];

      ms[0][1] = m[0][0] * m[0][1] + m[0][1] * m[1][1];

      ms[1][0] = m[1][0] * m[0][0] + m[1][1] * m[1][0];

      ms[1][1] = m[1][0] * m[0][1] + m[1][1] * m[1][1];


      for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                  printf("%.3lf ", ms[i][j]);
            }
            printf("\n");
      }

      return 0;
}