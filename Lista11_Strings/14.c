#include <stdio.h>
#include <string.h>
#define N 260

void str_clean(char str[], char clr[]){
      int aux=0;

      int i, j, t = strlen(str);
      for(i=0; i<strlen(clr); i++){
            for(j=0; j<t; j++){
                  if(str[j]!=clr[i]){
                        str[aux++] = str[j];
                  }
                  t = strlen(str);
            }
            str[aux] = 0;
            aux = 0;
      }

}

int main(){
      char str[N]; // string original
      char clr[N]; // lista de caracteres indesejados

      scanf("%[^\n]", str);
      scanf("\n%[^\n]", clr);
      str_clean(str, clr);
      printf("%s\n", str);

      return 0;
}