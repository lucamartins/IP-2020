// Exercicio proposto numero 3.3
/* Recebe uma string e compacta num unico caractere qualquer conjunto de caracteres repitidos consecutivos */

#include<stdio.h>
#include<string.h>

char *strpack(char *s){
    int i,j;

    for(i=j=0; i<strlen(s); i++){
        if(i==0) s[j++] = s[i];
        else if(s[i] != s[i-1]) s[j++] = s[i];
    }
    s[j] = '\0';

    return s;
}

int main(){
    char s[100]; gets(s);

    printf("%s\n", strpack(s));

    return 0;
}