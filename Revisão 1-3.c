#include <stdio.h>

int main(void) {
  int idade;
  char nome;

  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite a primeira letra do seu nome\n");
  scanf(" %c", &nome);
  printf("A primeira letra do seu nome é: %c e sua idade é: %d", nome, idade);

  return 0;
}