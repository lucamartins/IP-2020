/* Exercicio proposto numero 2.4: tornar todos os caracteres da string minusculos */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *strlwr(char *s); // 2.4

int main(){
    char s[100]; gets(s);

    printf("%s\n", strlwr(s));

    return 0;
}


char *strlwr(char *s){
    for(int i=0; i<strlen(s); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}