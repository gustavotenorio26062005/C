#include <stdio.h>

int main(void) {
  int n1;

  printf("Escreva um número: ");
  scanf("%d", &n1);
  if (n1 > 0 && n1 <= 100) {
    printf("O número está na faixa 1");
  } else if (n1 > 100 && n1 <= 200) {
    printf("O número está na faixa 2");
  } else if (n1 > 200 && n1 <= 300) {
    printf("O número está na faixa 3");
  } else if (n1 > 300 && n1 <= 400) {
    printf("O número está na faixa 4");
  } else if (n1 > 400) {
    printf("O número está na faixa 5");
  } else {
    printf("O número não está em nenhuma faixa");
  }

  return 0;
}