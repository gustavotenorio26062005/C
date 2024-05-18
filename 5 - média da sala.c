#include <stdio.h>

int main(void) {
  int i = 0;
  float media, mediaa = 0;
  printf("Digite sua média: ");
  scanf("%f", &media);
  while (media >= 0 && media <= 10) {
    i++;
    mediaa += media;
    printf("Digite sua media: ");
    scanf("%f", &media);
  }
  mediaa = mediaa / i;
  printf("A média da sala é: %f", mediaa);
  return 0;
}