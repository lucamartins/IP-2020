#include<stdio.h>
#define INF 1e9

int *cubo_menor_elemento(int v[]){
      int menor_elemento=INF;
      int *pmenor_elemento = &menor_elemento;

      for(int i=0; i<10; i++){
            if(menor_elemento > v[i]){
                  menor_elemento = v[i];
            }
      }
      menor_elemento = menor_elemento * menor_elemento * menor_elemento;
      return pmenor_elemento;
}

int quadrado_maior_elemento(int v[]){
      int maior_elemento=0;

      for(int i=0; i<10; i++){
            if(maior_elemento < v[i]){
                  maior_elemento = v[i];
            }
      }
      maior_elemento = maior_elemento * maior_elemento;
      return maior_elemento;
}

void imprimir_inversa(int v[]){
      printf("Impressao do vetor na ordem inversa: ");
      for(int i=9; i>=0; i--){
            printf("%d ", v[i]);
      }
      printf("\n");
      return;
}

void separa_paridade(int v[]){
      int vPar[10], vImpar[10];
      int cntPar=0, cntImpar=0;

      for(int i=0; i<10; i++){
            if(v[i] % 2 == 0){
                  vPar[cntPar] = v[i];
                  cntPar++;
            }
            else{
                  vImpar[cntImpar] = v[i];
                  cntImpar++;
            }
      }
      printf("Os valores pares do vetor sao: ");
      for(int i=0; i<cntPar; i++){
            printf("%d ", vPar[i]);
      } printf("\n");

      printf("Os valores impares do vetor sao: ");
      for(int i=0; i<cntImpar; i++){
            printf("%d ", vImpar[i]);
      } printf("\n");

}

double media_vetor(int v[]){
      double media=0;

      for(int i=0; i<10; i++){
            media += v[i];
      }
      media /= 10;

      return media;
}

int main(){
      int v[10], menor=INF, maior=0;

      for(int i=0; i<10; i++){ // 1.1
            scanf("%d", &v[i]);
      }

      separa_paridade(v); // 1.5
      imprimir_inversa(v); // 1.4
      printf("A media dos valores do vetor e: %.2lf\n", media_vetor(v)); // 1.6
      printf("O cubo do valor do menor elemento do vetor e: %d\n", *cubo_menor_elemento(v)); // 1.2
      printf("O quadrado do valor do maior elemento do vetor e: %d\n", quadrado_maior_elemento(v)); // 1.3

      return 0;
}