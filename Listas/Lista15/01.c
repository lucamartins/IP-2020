#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void analise(char c, int *vogais, int *consoantes){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') (*vogais)++;
    else (*consoantes)++;
}

int main(){
    char nome_arq[60];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arq);

    FILE *fp;
    fp = fopen(nome_arq, "r");
    if(fp == NULL){
        printf("Erro! Impossivel abrir o arquivo!\n");
  	    exit(1);
    }

    char c;
    int vogais=0, consoantes=0;


    while(!feof(fp)){
        c = fgetc(fp);
        c = tolower(c);

        if(isalpha(c)){
            analise(c, &vogais, &consoantes);
        }
    }

    printf("vogais = %d\nconsoantes = %d\n", vogais, consoantes);

    fclose(fp);

    return 0;
}