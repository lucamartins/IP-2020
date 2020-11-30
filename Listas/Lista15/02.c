#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome_arq[60];
    printf("Digite o nome do arquivo: ");
    scanf("%s", &nome_arq);

    FILE *fp = fopen(nome_arq, "r");
    if(fp == NULL){
        printf("Erro ao abrir\n");
        exit(1);
    }

    fseek(fp, -1, SEEK_END);
    char c = fgetc(fp);

    fseek(fp, 0, SEEK_SET);

    int qnt=0;
    char c_ler;

    while(!feof(fp)){
        c_ler = fgetc(fp);
        c_ler = tolower(c_ler);
        if(c_ler == c){
            qnt++;
        }
    }

    printf("Caractere '%c' ocorre %d vezes no arquivo de texto.\n", c, qnt);

    fclose(fp);

    return 0;
}