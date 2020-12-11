#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char entrada[60], saida[60];
    scanf("%s", entrada);
    scanf("%s", saida);

    FILE  *finput, *foutput;
    finput = fopen(entrada, "r");
    foutput = fopen(saida, "w");

    char *leitura = malloc(sizeof(char)); 
    int aux=0;

    while(!feof(finput)){
        leitura = realloc(leitura, ((aux+1)*sizeof(char)));

        leitura[aux] = fgetc(finput);

        aux++;
    }

    int i;
    for(i=aux-2; i>=0; i--){
        fprintf(foutput, "%c", leitura[i]);
    }

    return 0;
}