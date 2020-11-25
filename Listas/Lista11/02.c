#include <stdio.h>
#include <string.h>

int checar_qnt(char c){
      if(c == '1') return 2;
      else if(c == '2') return 5;
      else if(c == '3') return 5;
      else if(c == '4') return 4;
      else if(c == '5') return 5;
      else if(c == '6') return 6;
      else if(c == '7') return 3;
      else if(c == '8') return 7;
      else if(c == '9') return 6;
      else if(c == '0') return 6;
}

int main(){
      int N;
      scanf("%d", &N);

      int i;
      char string[100];

      for(i=0; i<N; i++){
            scanf("%s", string);

            int j, t=0;
            for(j=0; j<strlen(string); j++){
                  t+= checar_qnt(string[j]);
            }

            printf("%d leds\n", t);
      }


      return 0;
}