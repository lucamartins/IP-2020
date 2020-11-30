#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome_arq[60];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arq);

    FILE *fp = fopen(nome_arq, "r");
    if(fp == NULL){
        printf("Erro ao abrir\n");
        exit(1);
    }

    int i, alfabeto[26], letra_atual = 97; // !!! Comeca com letra A minuscula, codigo tabela ASCII decimal = 97 !!!
    char c;

    for(i=0; i<26; i++){
        alfabeto[i] = 0;
        while(!feof(fp)){
            c = fgetc(fp);

            if(c == letra_atual+i){
                alfabeto[i]++;
            }
        }
        fseek(fp, 0, SEEK_SET);
    }
    
    int letra_inicial = 97;
    for(i=0; i<26; i++){
        printf("%c = %d\n", letra_inicial+i, alfabeto[i]);
    }

    fclose(fp);

    return 0;
}