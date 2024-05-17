#include <stdio.h>

int main(void) {
  float n1, n2;

  printf("Digite dois números: ");
  scanf("%f %f", &n1, &n2);
  printf("Esses foram os números: %.2f e %.2f", n1, n2);

  return 0;
}