#include <stdio.h>

int main(void) {
  int certo = 10, j, valor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = 0; i != certo; i++) {
    scanf(" %d", &valor[i]);

    if (valor[i] == certo) {
      printf("Acertou mizeravi!\n");
      return 0;
    } else if (valor[i] > certo) {
      printf("Valor inserido maior\n");
      for (j = 0; j < i; j++) {
        if (valor[j] == valor[i] && valor[i] != 0) {
          printf("Valor repetido\n");
        }
      }
    } else if (valor[i] < certo) {
      printf("Valor inserido menor\n");
      for (j = 0; j < i; j++) {
        if (valor[j] == valor[i] && valor[i] != 0) {
          printf("Valor repetido\n");
        }
      }
    }
  }
  printf("Acabaram as tentativas");
  return 0;
}