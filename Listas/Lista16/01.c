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
    while(1){
        c = fgetc(fp);
        if(feof(fp)) break;
        printf("%c", c);
    }
    

    fclose(fp);

    return 0;
}