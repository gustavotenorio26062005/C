#include <stdio.h>

int main(void) {
  int idade, media = 0, i = 0;
  printf("Digite sua idade\n");
  scanf("%d", &idade);
  while (idade >= 18) {
    i++;
    media = media + idade;
    printf("O contador está em: %d\n", i);
    printf("A soma é: %d\n", media);
    printf("Digite sua idade\n");
    scanf("%d", &idade);
  }
  printf("Idade digitada menor que a condição\n");
  printf("O contador estáva em: %d\n", i);
  printf("A soma foi: %d\n", media);
  media = media / i;
  printf("A média das idades é: %d", media);
  return 0;
}