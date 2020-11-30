#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char nome_arq[60];
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arq);

    FILE *fp;
    FILE *fp2;
    fp = fopen(nome_arq, "r");
    fp2 = fopen("saida.txt", "w");

    char c;
    int aux_lower;

    while(1){
        aux_lower = 0;

        c = fgetc(fp);
        if(feof(fp)) break;

        if(c >= 65 && c <= 90){
            aux_lower = 1;
            c = tolower(c);
        }

        if(c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i'){
            c = '*';
        }

        if(aux_lower == 1){
            c = toupper(c);
        }
        if(c != EOF){
            fputc(c, fp2);
        }
    }


    fclose(fp);
    fclose(fp2);

    return 0;
}