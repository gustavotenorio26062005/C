#include <stdio.h>

int main(void) {
  int val;
  scanf("%d", &val);
  while (val < 4 && val > 0) {
    switch (val) {
    case 1:
      printf("O número foi: 1\n");
      break;
    case 2:
      printf("O número foi: 2\n");
      break;
    case 3:
      printf("O número foi: 3\n");
      break;
    }
    scanf("%d", &val);
  }
  printf("Número inválido\n");
  return 0;
}