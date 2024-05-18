#include <stdio.h>

int main(void) {
  int x, y, z, i = 0;
  printf("De 3 valores: ");
  scanf("%d %d %d", &x, &y, &z);
  while (x < y && z > 0) {
    i++;
    x = x + z;
  }
  printf("A quantidade de vezes necessária para que x fosse maior ou igual á y "
         "foi de = %d\n",i);
  return 0;
}