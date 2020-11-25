#include <stdio.h>
#include <string.h>

void remove_vogais(char *str, int *vogais){
    int i, j;
    int t = strlen(str);

    for(i=j=0; i<t; i++){
        if(str[i] == 'a' || str[i] == 'A'){
            vogais[0]++;
        }
        else if(str[i] == 'e' || str[i] == 'E'){
            vogais[1]++;
        }
        else if(str[i] == 'i' || str[i] == 'I'){
            vogais[2]++;
        }
        else if(str[i] == 'o' || str[i] == 'O'){
            vogais[3]++;
        }
        else if(str[i] == 'u' || str[i] == 'U'){
            vogais[4]++;
        }
        else{
            str[j++] = str[i];
        }
    }

    str[j] = 0;

}

int main(){
    char s[300];
    gets(s);

    int vogais[5];

    int i;
    for(i=0; i<5; i++){
        vogais[i] = 0;
    }

    remove_vogais(s, vogais);

    printf("%s\n", s);

    
    printf("a: %d\n", vogais[0]);
    printf("e: %d\n", vogais[1]);
    printf("i: %d\n", vogais[2]);
    printf("o: %d\n", vogais[3]);
    printf("u: %d\n", vogais[4]);
    

    return 0;
}