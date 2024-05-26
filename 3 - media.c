#include <stdio.h>
#define TAM 5
int main(void) {
  int i;
  float sala[TAM], media = 0; // Definindo a dimensão do vetor
  printf("Digite a nota dos alunos: ");
  for (i = 0; i < TAM; i++) {
    scanf(" %f", &sala[i]);
    media += sala[i];
  }
  printf("A media da sala eh: %.2f\n", media / TAM);
  return 0;
}