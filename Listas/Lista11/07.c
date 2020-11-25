#include <stdio.h>
#include <string.h>

char *funcao(int n, char leitura[]){
      if(n > 499) return NULL;

      static char s[500];

      if(n >= strlen(leitura)){
            strcpy(s, leitura);
            return s;
      } 
            
      int i;
      for(i=0; i<n; i++){
            s[i] = leitura[i];
      }
      s[i] = 0;

      return s;
}

int main(){
      int N;
      scanf("%d", &N);
      getchar();

      int n;
      char leitura[60];
      char *px;

      int i;
      for(i=0; i<N; i++){
            scanf("%d", &n);
            getchar(); 
            fgets(leitura, sizeof(leitura), stdin);
            leitura[strlen(leitura)-1] = 0;

            px = funcao(n, leitura);

            if(px != NULL){
                  printf("%s\n", px);
            }
      }

      return 0;
}