#include <stdio.h>
#define TAM 16

int main(void) {
  float vetor[TAM];
  for (int i = 0; i < TAM; i++) {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%f", &vetor[i]);
  }
  for (int i = 0; i < 8; i++){
    printf("%.2f ", vetor[i]);
  }
  for (int i = TAM-1; i >7 ; i--){
    printf("%.2f ", vetor[i]);
  }
    
  return 0;
}