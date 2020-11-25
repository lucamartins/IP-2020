// Exercicio proposto numero 3.2
/* Devolve o n-esimo caracter da string s */

#include<stdio.h>
#include<string.h>

char n_esimo(char *s, int n){
    return s[n];
}

int main(){
    char s[100]; gets(s);
    int n; scanf("%d", &n);

    printf("%c\n", n_esimo(s, n));

    return 0;
}