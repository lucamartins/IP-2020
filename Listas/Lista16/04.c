#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *fp_read, *fp_write;

    char arq1[60], arq2[60], arqSaida[60];
    char buffer[1000];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", arq1);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", arq2);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arqSaida);

    fp_read = fopen(arq1, "r");
    if(fp_read == NULL){
        printf("Erro ao abrir ARQUIVO 1.\n");
        exit(1);
    }

    fp_write = fopen(arqSaida, "w");
    if(fp_write == NULL){
        printf("Erro ao abrir ARQUIVO DE SAIDA.\n");
        exit(3);
    }

    while(!feof(fp_read)){
        fgets(buffer, sizeof(buffer), fp_read);
        fputs(buffer, fp_write);
    }
    fputc('\n', fp_write);
    fclose(fp_read);

    fp_read = fopen(arq2, "r");
    if(fp_read == NULL){
        printf("Erro ao abrir ARQUIVO 2.\n");
        exit(2);
    }

    while(!feof(fp_read)){
        fgets(buffer, sizeof(buffer), fp_read);
        fputs(buffer, fp_write);
    }
    fclose(fp_read);

    fclose(fp_write);

    return 0;
}