/* Exercicio proposto numero 2.1: Devolver o numero de caracteres alfabetico na string */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int strcounta(char *s); // 2.1

int main(){
    char s[100]; gets(s);

    printf("%d\n", strcounta(s));

    return 0;
}

int strcounta(char *s){
    int cnt=0;
    for(int i=0; i<strlen(s); i++){
        if(isalpha(s[i])) cnt++;
    }
    return cnt;
}