#include<stdio.h>
#include<string.h>


void combinador(char s1[], char s2[]){
      char saida[110];
      int len_s1 = strlen(s1), len_s2 = strlen(s2);
      int cnt_s1=0, cnt_s2=0, cnt_saida=0;

      while(cnt_saida < (len_s1+len_s2) ){
            if(cnt_s1 < len_s1){
                  saida[cnt_saida++] = s1[cnt_s1++];
            }
            if(cnt_s2 < len_s2){ 
                  saida[cnt_saida++] = s2[cnt_s2++];  
            }
      }
      
      saida[cnt_saida] = 0;

      printf("%s\n", saida);
      
}

int main(){
      int N; 
      scanf("%d", &N);

      char s1[55], s2[55];

      int i=0;
      for(i=0; i<N; i++){
            scanf("%s %s", s1, s2);
            combinador(s1, s2);
      }

      return 0;
}