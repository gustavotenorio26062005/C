#include <stdio.h>
#define TAM 10
int main(void) {
  int i, teste1[TAM] = {0, 0, 0}, teste2[TAM] = {0, 0, 0};
  for (i = 0; i < TAM; i++) {
    scanf(" %d", &teste1[i]);
    if (i % 2 == 0) {
      teste2[i] = teste1[i] * 5;
    } else {
      teste2[i] = teste1[i] + 5;
    }
  }
  for (i = 0; i < TAM; i++) {
    printf(" %d\n", teste1[i]);
  }
  for (i = 0; i < TAM; i++) {
    printf(" %d\n", teste2[i]);
  }
  return 0;
}