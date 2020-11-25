#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
      int n; 
      scanf("%d", &n);
      getchar();

      char buffer[10000];
      int t;

      char **mat;
      mat = malloc (n * sizeof (char*));

      int i;
      for(i=0; i<n; i++){
            fgets(buffer, sizeof(buffer), stdin);
            buffer[strlen(buffer)-1] = 0;

            t = strlen(buffer);
            
            mat[i] = malloc(t * sizeof (char));

            strcpy(mat[i], buffer);
      }

      for(i=0; i<n; i++){
            printf("%s\n", mat[i]);
      }

      for(i=0; i<n; i++){
            free(mat[i]);
      }

      free(mat);

      return 0;
}