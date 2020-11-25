/* Exercicio proposto numero 2.2: tornar a string vazia  */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *init_str(char *s); // 2.2

int main(){
    char s[100]; gets(s);

    init_str(s);
    puts(s);

    return 0;
}


char *init_str(char *s){
    s[0] = '\0';
    return s;
}
