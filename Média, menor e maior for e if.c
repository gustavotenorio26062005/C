#include <stdio.h>

int main(void) {
  int media = 0, num, i, maior, menor;
  for (i = 0; i < 5; i++) {
    printf("Digite a idade\n");
    scanf("%d", &num);
    media = media + num;
    if (num > maior || i == 0) maior = num;
    if (num < menor || i == 0) menor = num;
  }
  media = media / 5;
  printf("A media da idade dos alunos é %d \nA maior idade foi: %d\nA menor "
         "foi %d ",
         media, maior, menor);
  return 0;
}