#include <stdio.h>
#include <string.h>

void processamento(char leitura[]){
      int i, j;

      // Primeira passada
      for(i=0; i<strlen(leitura); i++){
            if(isalpha(leitura[i])){
                  leitura[i] += 3;
            }
      }

      // Segunda passada
      char aux;
      for(i=0, j=strlen(leitura)-1; i<j; i++, j--){
            aux = leitura[i];
            leitura[i] = leitura[j];
            leitura[j] = aux;
      }
      
      // Terceira passada
      for(i=strlen(leitura)/2; i< strlen(leitura); i++){
            leitura[i] -= 1;
      }

      puts(leitura);

}


int main(){
      int N;
      scanf("%d", &N);
      getchar();

      char leitura[1005];

      int i;
      for(i=0; i<N; i++){
            fgets(leitura, sizeof(leitura), stdin);
            leitura[strlen(leitura)-1] = 0;

            processamento(leitura);
      }


      return 0;
}