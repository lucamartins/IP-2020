#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
      int matricula;
      int idade;
      int numFilhos;
      char sexo;
      double salario;
} FUNCIONARIO;

void analise_estatistica(FUNCIONARIO *F, int mediaIdades, int mediaFilhos, int N){
      int i;
      int r1=0, r2=0, r3=0, r4=0;

      for(i=0; i<N; i++){
            //printf("%d %d %d %c %lf\n", ptr[i].matricula, ptr[i].idade, ptr[i].numFilhos, ptr[i].sexo, ptr[i].salario);

            if((F[i].idade > mediaIdades) && (F[i].salario > 3600)) r1++;

            if((F[i].sexo == 'F') && (F[i].numFilhos > mediaFilhos)) r2++;

            if((F[i].sexo == 'M') && (F[i].numFilhos > mediaFilhos)) r3++;

            if((F[i].idade > 47) && ( (F[i].salario/(F[i].numFilhos+1)) < 2400)) r4++;
      }

      printf("%d %d %d %d\n", r1, r2, r3, r4);
}

int main(){
      int N, i;
      int mediaFilhos=0, mediaIdades=0;

      scanf("%d", &N);
      //getchar();

      FUNCIONARIO *ptr;
      ptr = malloc(N * sizeof(FUNCIONARIO));

      for(i=0; i<N; i++){
            scanf("%d %d %d %c %lf", &ptr[i].matricula, &ptr[i].idade, &ptr[i].numFilhos, &ptr[i].sexo, &ptr[i].salario);

            mediaIdades += ptr[i].idade;
            mediaFilhos += ptr[i].numFilhos;
      }

      mediaIdades /= N;
      mediaFilhos /= N;

      analise_estatistica(ptr, mediaIdades, mediaFilhos, N);


      free(ptr);

      return 0;
}