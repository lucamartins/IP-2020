#include <stdio.h>
#include <string.h>

void avaliar(char s1[], char s2[]){
      int op=0;

      int i;
      for(i=0; i<strlen(s1); i++){
            while(s1[i] != s2[i]){
                  if(s1[i] == 'z') s1[i] = 'a';
                  else s1[i]++;
                  op++;
            }
      }

      printf("%d\n", op);
}

int main(){
      int N;
      scanf("%d", &N);

      char s1[10005];
      char s2[10005];

      int i;
      for(i=0; i<N; i++){
            scanf("%s %s", s1, s2);
            avaliar(s1, s2);
      }


      return 0;
}