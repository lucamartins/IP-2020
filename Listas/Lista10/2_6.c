/* Exercicio proposto numero 2.6: comparacao com ignore case */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int stricmp(char *s1, char *s2){
    for(int i=0; i<strlen(s1); i++) s1[i] = tolower(s1[i]);
    for(int i=0; i<strlen(s2); i++) s2[i] = tolower(s2[i]);

    int i=0;
    while(s1[i] == s2[i] && s1[i] != '\0'){
        i++;
    }
    return (s1[i] - s2[i]);

}

int main(){
    char s1[100], s2[100];
    gets(s1); gets(s2);

    printf("%d\n", stricmp(s1, s2));

    return 0;
}