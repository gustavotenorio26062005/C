#include <stdio.h>

int main(void) {
  int opcao = 0, quantidade = 0, quantidade1 = 0, quantidade2 = 0,
      quantidade3 = 0, valor1 = 0, valor2 = 0, valor3 = 0, i = 0;
  float valor = 0;
  do {
    if (i == 0) {
      printf(
          "Este é o cardapio: \nOpcao 1 - Sanduíche natural - R$ 5,00 \nOpcao "
          "2 - X-salada - R$15,00 \npcao 3 - Refrigerante - R$ 3,50\nOpcao 4 "
          "- Finalizar\n");
      printf("Digite uma opcao\n");
    } else {
      printf("Digite outra opcao\n");
    }
    scanf("%d", &opcao);
    i++;
    switch (opcao) {
    case 1:
      printf("Digite a quantidade\n");
      scanf("%d", &quantidade);
      valor1 += (5 * quantidade);
      valor += (5 * quantidade);
      quantidade1 += quantidade;
      quantidade = 0;
      break;
    case 2:
      printf("Digite a quantidade\n");
      scanf("%d", &quantidade);
      valor2 += (15 * quantidade);
      valor += (15 * quantidade);
      quantidade2 += quantidade;
      quantidade = 0;
      break;
    case 3:
      printf("Digite a quantidade\n");
      scanf("%d", &quantidade);
      valor3 += (3.50 * quantidade);
      valor += (3.50 * quantidade);
      quantidade3 += quantidade;
      quantidade = 0;
      break;
    case 4:
      printf("Calculando\n");
      break;
    default:
      printf("Caso invalido\n");
    }
  } while (opcao != 4 || i == 0);
  printf("O valor total a ser pago eh de R$ %.2f\nOs pedidos foram:\n%d "
         "Sanduiche(s)  natural um total de: R$%.2f\n%d X-salada(s) um total "
         "de: R$%.2f\n%d Refrigerante(s) um total de: R$%.2f\n",
         valor, quantidade1, (float)valor1, quantidade2, (float)valor2,
         quantidade3, (float)valor3);
  return 0;
}