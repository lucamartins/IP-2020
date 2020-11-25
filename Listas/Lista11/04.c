#include<stdio.h>
#include<string.h>

int verificar_palavra(char word[]){
      int cnt1=0, cnt2=0, cnt3=0;

      if(strlen(word) == 3){
            if(word[0] == 'o') cnt1++;
            else if(word[0] == 't') cnt2++;

            if(word[1] == 'n') cnt1++;
            else if(word[1] == 'w') cnt2++;

            if(word[2] == 'e') cnt1++;
            else if(word[2] == 'o') cnt2++;

            if(cnt1 >= 2) return 1;
            else return 2;
      }
      return 3;
}

int main(){
      int N;
      scanf("%d", &N);

      char word[10];

      int i;
      for(i=0; i<N; i++){
            scanf("%s", word);
            printf("%d\n", verificar_palavra(word));
      }


      return 0;
}