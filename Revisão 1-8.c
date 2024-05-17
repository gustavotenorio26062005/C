#include <stdio.h>

int main(void) {
  int contador;
  for(contador = 1; contador <= 1000; contador = contador + 2){
    printf("%d\n", contador);
  }
  for(contador = 500; contador >= 0; contador--){
    printf("%d\n", contador);
  }
  return 0;
}