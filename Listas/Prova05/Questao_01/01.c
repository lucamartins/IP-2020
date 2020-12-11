#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome_entrada[60], nome_saida[60];
    scanf("%s %s", nome_entrada, nome_saida);

    FILE *fp;
    fp = fopen(nome_entrada, "r");
    if(fp == NULL){
        printf("Nao foi possivel realizar abertura do arquivo de entrada.\n");
    }
    FILE *fp2 = fopen(nome_saida, "w");
    if(fp2 == NULL){
        printf("Nao foi possivel realizar abertura do arquivo de saida.\n");
    }


    char c;
    char *buffer = malloc(35 * sizeof(char));
    int auxMem=1;
    int cont = 0;

    while(!feof(fp)){
        buffer = (char*) realloc(buffer, auxMem * 35 * sizeof(char));
        c = fgetc(fp);
        
        buffer[cont] = c;
        cont++;
        
        auxMem++;
    }

    int i, j = cont - 2;
    for(i=0; i<strlen(buffer)-1; i++){
        c = buffer[j--];
        fputc(c, fp2);
    }

    free(buffer);
    fclose(fp);
    fclose(fp2);

    return 0;
}