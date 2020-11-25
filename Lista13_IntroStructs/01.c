#include <stdio.h>
#include <string.h>

typedef struct{
      char titulo[60];
      char autor[60];
      int preco;
} Livro;

void configura_livro(Livro *livros){
      int i;

      for(i=0; i<5; i++){
            strcpy(livros[i].titulo, "Titulo do Livro X");
            strcpy(livros[i].autor, "Autor do Livro X");
            livros[i].preco = 120;
      }
}

int main(){
      Livro livros[5];

      configura_livro(livros);

      int i;

      for(i=0; i<5; i++){
            printf("%s\n", livros[i].titulo);
            printf("%s\n", livros[i].autor);
            printf("%d\n", livros[i].preco);
      }


      return 0;
}