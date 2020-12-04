// Obs: A formatacao do arquivo de entrada deve ser a seguinte:

// nome_aluno
// nota_1
// nota_2
// nota_3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[40];
    double n[3];
} Aluno;

int main(){
    int i, j;
    Aluno a1;

    char input[40], output[40];
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", input);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", output);

    FILE *fpin = fopen(input, "r");
    FILE *fpout = fopen(output, "w");

    // Lendo dados do arq de entrada
    fgets(a1.nome, sizeof(a1.nome), fpin);
    fscanf(fpin, "%lf %lf %lf", &a1.n[0], &a1.n[1], &a1.n[2]);

    // Ordenando notas (crescente)
    double aux;
    for(i=0; i<3-1; i++){
        for(j=0; j<3-1-i; j++){
            if(a1.n[j] > a1.n[j+1]){
                aux = a1.n[j+1];
                a1.n[j+1] = a1.n[j];
                a1.n[j] = aux;
            }
        }
    }

    fprintf(fpout, "%s%.2lf\n%.2lf\n%.2lf", a1.nome, a1.n[0], a1.n[1], a1.n[2]);

    fclose(fpin);
    fclose(fpout);

    return 0;
}