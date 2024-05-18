#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um número par: ");
  scanf("%d", &num);
  while (num % 2 == 0) {
    printf("Digite outro número par: ");
    scanf("%d", &num);
  }
  printf("O número não é par.");
  return 0;
}