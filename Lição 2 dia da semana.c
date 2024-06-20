#include <stdio.h>

void dia_semana(){
int dia;
scanf("%d",&dia);
  switch(dia){
    case 1:
    printf("Domingo");
    break;
    case 2:
    printf("Segunda");
    break;
    case 3:
    printf("Terça");
    break;
    case 4:
    printf("Quarta");
    break;
    case 5:
    printf("Quinta");
    break;
    case 6:
    printf("Sexta");
    break;
    case 7:
    printf("Sábado");
    break;
    default:
    printf("Dia inválido");
    break;
  }
}

int main(void) {
  printf("Digite o dia da semana: ");
  dia_semana();
  
  return 0;
}