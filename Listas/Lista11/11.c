#include <stdio.h>
#include <string.h>

int aliteracoes(char leitura[]){
      int cnt_final=0, cnt_aux=1;
      char ultimo_char = tolower(leitura[0]);

      int i;
      for(i=1; i<strlen(leitura); i++){
            leitura[i] = tolower(leitura[i]);
            if(leitura[i-1] == ' '){
                  if( (leitura[i] == ultimo_char) && (cnt_aux == 1) ){
                        cnt_final++;
                        cnt_aux++;
                  }
                  else if( (leitura[i] == ultimo_char) && (cnt_aux != 1) ){
                        cnt_aux++;
                  }
                  else if(leitura[i] != ultimo_char){
                        cnt_aux = 1;
                        ultimo_char = leitura[i];
                  }
            }
      }

      printf("%d\n", cnt_final);

}

int main(){
      char leitura[5000];

      while(fgets(leitura, sizeof(leitura), stdin)){
            leitura[strlen(leitura)-1] = 0;
            aliteracoes(leitura);
      }

      return 0;
}