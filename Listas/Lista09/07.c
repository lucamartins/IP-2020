#include<stdio.h>

void ident_maior_elem(int *v, int t, int *a){
      int maior = 0, posicao;

      for(int i=0; i<10; i++){
            if(*(v+i) > maior){
                  maior = *(v+i);
                  posicao = i;
            }
      }
      *(a) = maior;
      *(a+1) = posicao;
}

int main(){
      int v[10];
      int a[2];

      for(int i=0; i<10; i++){
            scanf("%d", &v[i]);                  
      }

      ident_maior_elem(v, 10, a);

      printf("O vetor e: ");
      for(int i=0; i<10; i++){
            printf("%d ", v[i]);
      }
      printf("\n");

      printf("Maior elemento: %d. Se encontra na posicao %d.\n", a[0], a[1]);


      return 0;
}