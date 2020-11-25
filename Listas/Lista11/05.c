#include <stdio.h>
#include <string.h>

int main(){
      int N, M;
      char soma[100];


      while(scanf("%d %d", &N, &M) && N != 0 && M != 0){
            sprintf(soma, "%d", N+M);

            int i, cnt=0;
            for(i=0; i<strlen(soma); i++){
                  if(soma[i] != '0'){
                        soma[cnt++] = soma[i];
                  }
            }
            soma[cnt] = 0;

            printf("%s\n", soma);
      }

      return 0;
}