#include <stdio.h>
#define NUM 3

int main(void) {
  int i, opcao;
  float temp[NUM], media = 0, maior[2], menor[2], fahre[NUM];
  for (i = 0; i < NUM; i++) {
    printf("Digite a temperatura numero %d\n", i);
    scanf("%f", &temp[i]);
  }
  do {
    printf(
        "\nO que voce deseja?\n1 - Descubriar a media\n2 - temperaturas "
        "menores que 10\n3 - Descubrir a maior temperatura\n4 - Descubrir "
        "menor temperaturan\n5 - posicao menor \n6 - Converter para Firenheit "
        "temperatura\n7 - sair\nOpcao: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
      for (i = 0; i < NUM; i++) {
        media += temp[i];
      }
      printf("\nA media das temperaturas eh: %.2f\n", media / NUM);
      break;
    case 3:
      for (i = 0; i < NUM; i++) {
        if (temp[i] > maior[0] || i == 0) {
          maior[0] = temp[i];
        }
      }
      printf("Maior temperatura: %.2f\n", maior[0]);
      break;
    case 6:
      for (i = 0; i < NUM; i++) {
        fahre[i] = temp[i] * 1.8 + 32;
        printf("\nArray temperatura: %.0f em Fahrenheit: %.0f posicao: %d\n",
               temp[i], fahre[i], i);
      }
      break;
    case 2:
      for (i = 0; i < NUM; i++) {
        if (temp[i] < 10) {
          printf(
              "Temperatura abaixo de 10 graus: %.2f Esta na posicao da array: "
              "%d\n",
              temp[i], i);
        }
      }
      break;
    case 4:
      for (i = 0; i < NUM; i++) {
        if (temp[i] < menor[0] || i == 0) {
          menor[0] = temp[i];
        }
      }
      printf("Menor temperatura: %.2f\n", menor[0]);
      break;
    case 5:
      for (i = 0; i < NUM; i++) {
        if (temp[i] < menor[0] || i == 0) {
          menor[1] = i;
        }
      }
      printf("Posicao da menor temperatura: %.0f\n", menor[1]);
      break;
    case 7:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção invalida\n");
      break;
    }
  } while (opcao != 7);
  return 0;
}