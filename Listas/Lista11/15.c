#include <stdio.h>
#include <string.h>

void processamento(char str[]){
      int i;
      int anterior;
      int qnt_alphas=0; // So para checar quando for a primeira letra alfabetica

      for(i=0; i<strlen(str); i++){
            if(isalpha(str[i])){
                  if(qnt_alphas == 0){
                        str[i] = toupper(str[i]);
                        anterior = 1;
                        qnt_alphas++;
                  }
                  else{
                        if(anterior == 0){ // Anterior foi minusculo
                              str[i] = toupper(str[i]);
                              anterior = 1;
                        }
                        else if(anterior == 1){ // Anterior foi maiusculo
                              str[i] = tolower(str[i]);
                              anterior = 0;
                        }
                  }
            }
      }

      printf("%s\n", str);
}

int main(){
      char str[55];

      while(fgets(str, sizeof(str), stdin)){
            str[strlen(str)-1] = 0;
            processamento(str);
      }


      return 0;
}