#include <stdio.h>
#include <string.h>

int indice(char c, char s[]){
      int i;
      for(i=0; i<strlen(s)-1; i++){
            if(s[i] == c){
                  return i;
            }
      }
      return -1;
}

int main(){
      int N;
      scanf("%d", &N);
      getchar();
      
      char c, s[500];

      int i;
      for(i=0; i<N; i++){
            c = getchar();
            getchar();
            fgets(s, sizeof(s), stdin);
            int j = indice(c, s);
            if(j != -1){
                  printf("Caractere %c encontrado no indice %d da string.\n", c, j);
            }
            else{
                  printf("Caractere %c nao encontrado.\n", c);
            }
      }

      return 0;
}