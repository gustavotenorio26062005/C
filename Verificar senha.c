#include <stdio.h>

int main(void) {
  int senha = 123, tentativa;
  printf("Digite a senha: \n");
  scanf("%d", &tentativa);
  while (tentativa != senha) {
    printf("Incorreto digite a senha novamente: \n");
    scanf("%d", &tentativa);
  }
  return 0;
}