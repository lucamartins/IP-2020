#include<stdio.h>
#include<string.h>
#include<ctype.h>

int verificar_vogal(char c){
      if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return 1;
      }
      return 0;
}

int main(){
      int N; 
      scanf("%d", &N); 
      getchar();

      char leitura[10005]; 
      int letras, vogais, consoantes;

      int i, j;
      for(i=0; i<N; i++){
            fgets(leitura, sizeof(leitura), stdin);

            leitura[strlen(leitura)-1] = 0;

            letras=0, vogais=0, consoantes=0;

            for(j=0; j<strlen(leitura); j++){
                  if(isalpha(leitura[j])){ 
                        letras++;
                        if(verificar_vogal(leitura[j])){
                              vogais++;
                        }
                        else {
                              consoantes++;
                        }
                  }
            }
            printf("Letras = %d\n", letras);
            printf("Vogais = %d\n", vogais);
            printf("Consoantes = %d\n", consoantes);
      }

      return 0;
}