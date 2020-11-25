#include <stdio.h>
#include <string.h>

void analise(char str[]){
      int i, j;
      int qnt[26];
      for(i=0; i<26; i++) qnt[i] = 0;
      char compare = 'a';

      for(i=0; i<26; i++){
            for(j=0; j<strlen(str); j++){
                  str[j] = tolower(str[j]);
                  if(str[j] == compare) qnt[i]++;
            }
            compare++;
      }

      int checar_maior=0;
      for(i=0; i<26; i++){
            if(qnt[i] > checar_maior) checar_maior = qnt[i];
      }

      for(i=0; i<26; i++){
            if(qnt[i] == checar_maior){
                  printf("%c", 97+i);
            }
      }

      printf("\n");

}

int main(){
      int N;
      scanf("%d", &N);
      getchar();

      char str[205];

      int i;
      for(i=0; i<N; i++){
            fgets(str, sizeof(str), stdin);
            str[strlen(str)-1] = 0;
            analise(str);
      }

      return 0;
}