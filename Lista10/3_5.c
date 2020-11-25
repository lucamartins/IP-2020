#include<stdio.h>
#include<string.h>

char *xspace(char *s){
    int i,j;

    for(i=j=0; i<strlen(s); i++){
        s[j++] = s[i];

        if(s[i] != ' '){
            s[j++] = ' ';
        }
    }
    s[j] = '\0';

    return s;
}

int main(){
    char s[100]; 
    gets(s);

    printf("%s\n", xspace(s));

    return 0;
}
