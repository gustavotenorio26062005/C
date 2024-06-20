#include <stdio.h>
#define LIN 4
#define COL 4

int main(void) {
  int matriz[LIN][COL], i, j;
  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      if (i == j) {
        matriz[i][j] = 1;
      } else {
        matriz[i][j] = 0;
      }
    }
  }
  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      printf(" %d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}