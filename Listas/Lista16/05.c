#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// OBS: Cada linha do arquivo de entrada deve conter a cidade primeiramente e depois, separado por virgula, o numero de habitantes !

int main(){
    char arq_entrada[60], arq_saida[60];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arq_entrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arq_saida);

    FILE *fp = fopen(arq_entrada, "r");
    FILE *fpOut = fopen(arq_saida, "w");

    char aux_cidade[100], cidade_mais_pop[100];
    int aux_num_hab = 0, num_hab = 0;
 
    char buffer[1000], *piece;

    while(!feof(fp)){
        fgets(buffer, sizeof(buffer), fp);
        buffer[strlen(buffer)-1]=0;

        piece = strtok(buffer, ",");
        strcpy(aux_cidade, piece);

        piece = strtok(NULL, ",");
        aux_num_hab = strtol(piece, NULL, 10);

        if(aux_num_hab > num_hab){
            strcpy(cidade_mais_pop, aux_cidade);
            num_hab = aux_num_hab;
        }
    }

    fprintf(fpOut, "%s %d", cidade_mais_pop, num_hab);

    fclose(fp);
    fclose(fpOut);

    return 0;
}