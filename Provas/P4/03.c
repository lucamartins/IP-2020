#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
      int numJogo;
      int numero[6];
} CARTELA;

typedef struct {
      int numConcurso;
      int numero[6];
} VENCEDORA;


int verificar_num(int num, VENCEDORA *m){
      int i;
      for(i=0; i<6; i++){
            if((m->numero[i]) == num) return 1;
      }
      return 0;
}

void analise(CARTELA *c, VENCEDORA *m, int N){ // `c` de cartelas e `m` de modelo
      int i, j, k, qntAcertos;
      int qntCartelasCorretas=0;
      int certos[6], aux;

      for(i=0; i<N; i++){
            qntAcertos = 0;
            aux = 0;
            
            // Verificar quantos numeros de determinada cartela em questao foram corretos
            for(j=0; j<6; j++){
                  if(verificar_num(c[i].numero[j], m)){
                        certos[aux++] = c[i].numero[j];
                        qntAcertos++;
                  } 
            }

            if(qntAcertos == 6){
                  qntCartelasCorretas++;
                  printf("SENA %d: ", c[i].numJogo);
                  for(k=0; k<aux; k++){
                        printf("%d ", certos[k]);
                  }
                  printf("\n");
            }

            else if(qntAcertos == 4){
                  qntCartelasCorretas++;
                  printf("QUADRA %d: ", c[i].numJogo);
                  for(k=0; k<aux; k++){
                        printf("%d ", certos[k]);
                  }
                  printf("\n");
            }

            else if(qntAcertos == 5){
                  qntCartelasCorretas++;
                  printf("QUINA %d: ", c[i].numJogo);
                  for(k=0; k<aux; k++){
                        printf("%d ", certos[k]);
                  }
                  printf("\n");
            }

      }

      if(qntCartelasCorretas == 0){
            printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d", m->numConcurso);
      }

}

int main(){
      int N, i;
      scanf("%d", &N);

      CARTELA *cartelas;
      cartelas = malloc (N * sizeof(CARTELA));
     
      VENCEDORA *vencedora;
      vencedora = malloc(sizeof(VENCEDORA));

      for(i=0; i<N; i++){
            scanf("%d %d %d %d %d %d %d", &cartelas[i].numJogo, &cartelas[i].numero[0], &cartelas[i].numero[1], &cartelas[i].numero[2], &cartelas[i].numero[3], &cartelas[i].numero[4], &cartelas[i].numero[5]);
      }
      scanf("%d %d %d %d %d %d %d", &vencedora->numConcurso, &vencedora->numero[0], &vencedora->numero[1], &vencedora->numero[2], &vencedora->numero[3], &vencedora->numero[4], &vencedora->numero[5]);


      analise(cartelas, vencedora, N);



      free(cartelas);
      free(vencedora);

      return 0;
}