// Exercicio proposto numero 3.4
/* Transforma a string s, deixando apenas o caracteres existentes de n em n posicoes */
#include<stdio.h>
#include<string.h>

char *entremeado(char *s, int n){
    int aux=0, i, j;

    for(i=j=0; i<strlen(s); i++){
        if(aux == 0){
            s[j++] = s[i];
        }
        aux++;
        if(aux==n+1) aux=0;
    }
    s[j] = '\0';

    return s;
}

int main(){
    char s[100]; gets(s);
    int n; scanf("%d", &n);

    printf("%s\n", entremeado(s, n));


    return 0;
}

