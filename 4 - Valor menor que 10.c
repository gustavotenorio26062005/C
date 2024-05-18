#include <stdio.h>

int main(void) {
  int val = 0;
  while (val < 10 && val >= 0) {
    printf("Digite um valor: \n");
    scanf("%d", &val);
  }
  printf("O valor digitado foi: %d\nE não entra nas condições!", val);
  return 0;
}