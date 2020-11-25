#include <stdio.h>

int main(){
      int v1, v2, v3, v4, vMax, nivelMax;
      scanf("%d %d %d %d", &v1, &v2, &v3, &v4);

      if(v1 >= v2) vMax = v1;
      else vMax = v2;

      if(v3 > vMax) vMax = v3;

      if(v4 > vMax) vMax = v4;

      if(vMax < 10){
            nivelMax = 1;
      }
      else if(vMax < 20){
            nivelMax = 2;
      }
      else{
            nivelMax = 3;
      }

      if(v1 > 0 && v2 > 0 && v3 > 0 && v4 > 0){
            printf("Nivel %d\n", nivelMax);
      }
      else{
            printf("Grupo invalido\n");
      }
      
      return 0;
}