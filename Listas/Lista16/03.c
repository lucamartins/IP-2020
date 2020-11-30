#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *fp, *fp2;
    char arq_entrada[60], arq_saida[60];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arq_entrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arq_saida);

    fp = fopen(arq_entrada, "r");
    fp2 = fopen(arq_saida, "w");

    char c;

    while(1){
        c = fgetc(fp);
        if(feof(fp)) break;

        c = toupper(c);
        fputc(c, fp2);
    }

    fclose(fp);
    fclose(fp2);

    return 0;
}