// Exercicio proposto numero 3.1
/* Receber uma string, retirando todos os caracteres que nao se encontram repetidos */

#include<stdio.h>
#include<string.h>

int strcountc(char *s, char ch){
    int cnt=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i] == ch) cnt++;
    }
    return cnt;
}

char *remove_nao_rep(char *s){
    int i, j;

    for(i=0; i<strlen(s); i++){
        if(strcountc(s, s[i]) > 1){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    
    return s;
}

int main(){
    char s[100];
    gets(s);

    printf("%s\n", remove_nao_rep(s));

    return 0;
}