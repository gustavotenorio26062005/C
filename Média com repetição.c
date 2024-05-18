#include <stdio.h>

int main(void) {
  int media = 0, num, i;
  for (i = 0; i < 5; i++) {
    printf("Digite o valor do aluno\n");
    for (i = 0; i < 5; i++) {
      scanf("%d", &num);
      media = media + num;
    }
  }
  media = media / 5;
  printf("A media dos alunos é %d", media);
  return 0;
}