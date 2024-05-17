#include <stdio.h>

int main(void) {
  int n1;

  printf("Digite um número: \n");
  scanf("%d", &n1);
  if (n1 > 100) {
    printf("O número é maior que 100");
  } else if (n1 < 100) {
    printf("O número é menor que 100");
  } else {
    printf("O número é igual a 100");
  }

  return 0;
}