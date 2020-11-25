/* Exercicio proposto numero 2.3: retornar o ultimo indice do caractere ch na string  */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int ult_ind_chr(char *s, char ch); // 2.3

int main(){
    char s[100]; gets(s);

    printf("%d\n", ult_ind_chr(s, 'a'));

    return 0;
}


int ult_ind_chr(char *s, char ch){
    int ui = -1;
    for(int i=0; i<strlen(s); i++){
        if(s[i] == ch) ui = i;
    }
    return ui;
}

