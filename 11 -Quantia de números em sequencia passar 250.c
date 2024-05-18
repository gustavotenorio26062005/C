#include <stdio.h>

int main(void) {
  int i = 0, soma = 0;
  while (soma < 250) {
    i++;
    soma += i;
  }
  printf("A quantia de numeros em sequencia para a soma deles ser igual ou "
         "maior que 250 eh: %d",
         i);
  return 0;
}