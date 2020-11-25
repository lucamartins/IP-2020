/* Exercicio proposto numero 2.5: Coloca o caractere ch apenas nas n primeiras posicoes da string s */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strnset(char *s, char ch, int n){
    if(n > strlen(s)) n = strlen(s);

    for(int i=0; i<n; i++){
        s[i] = ch;
    }
    return s;
}

int main(){
    char s[100]; gets(s);

    printf("%s\n", strnset(s, 'k', 4));

    return 0;
}