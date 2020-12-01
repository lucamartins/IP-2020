#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("arq.txt", "w");

    char c;
    while(1){
        scanf("%c", &c);
        if(c != '0') fputc(c, fp);
        else break;
    }
    fclose(fp);

    fp = fopen("arq.txt", "r");
    while(!feof(fp)){
        c = fgetc(fp);
        if(feof(fp)) break; // Parar no penultimo caractere. Esse vai ser o ultimo de valor, os outros em diante serao estruturais
        printf("%c", c);
    }
    

    fclose(fp);

    return 0;
}