#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALE 101

main() {
  int c, l, m[6][4], m2[6][4], maior, cont = 0;
  char x = 'r';
  srand(time(NULL));
  do{
    if(cont != 0){
      printf("\nCaso deseja continuar digite qualquer tecla, do contrário digite S para sair\n");
      scanf("%c", &x);
      getchar();
    }
    if(x != 's' && x != 'S'){
      for (l = 0; l < 6; l++) {
        for (c = 0; c < 4; c++) {
          m[l][c] = rand() % ALE;
        }
      }
      printf("Matriz gerada: \n");
      for (l = 0; l < 6; l++) {
        for (c = 0; c < 4; c++) {
          if (c < 3) {
            printf("%i - ", m[l][c]);
          } else {
            printf("%i\n", m[l][c]);
          }
        }
      }
      for (l = 0; l < 6; l++) {
        for (c = 0; c < 4; c++) {
          if (c == 0) {
            maior = m[l][c];
          } else {
            if (maior < m[l][c]) {
              maior = m[l][c];
            }
          }
        }
        for (c = 0; c < 4; c++) {
          m2[l][c] = m[l][c] * maior;
        }
        printf("\nO maior número da linha %i: %i", l, maior);
      }
      printf("\n\nMatriz resultante: \n");
      for (l = 0; l < 6; l++) {
        for (c = 0; c < 4; c++) {
          if (c < 3) {
            printf("%i - ", m2[l][c]);
          } else {
            printf("%i\n", m2[l][c]);
          }
        }
      }
      cont++;
    }
  }while (x != 's' && x != 'S');
}