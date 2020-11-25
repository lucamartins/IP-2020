#include<stdio.h>
#define INF 1e9

int main(){
      double numBaixo=0, altBaixo=INF, numAlto=0, altAlto=0;
      double v[2];

      for(int i=0; i<3; i++){
            scanf("%lf %lf", &v[0], &v[1]);

            if(v[1] > altAlto){
                  altAlto = v[1];
                  numAlto = v[0];
            }

            if(v[1] < altBaixo){
                  altBaixo = v[1];
                  numBaixo = v[0];
            }

      }

      printf("Aluno mais baixo: numero %.0lf e altura %.2lf.\n", numBaixo, altBaixo);

      printf("Aluno mais alto: numero %.0lf e altura %.2lf.\n", numAlto, altAlto);

      return 0;
}