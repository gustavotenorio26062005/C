#include <stdio.h>

int main() {
  double a = 80000.00, b = 200000.00;
  int ano = 0;
  while (a <= b) {
    a *= 1.03;
    b *= 1.015;
    ano++;
  }
  printf("A população de A ultrapassará a de B em %d anos.\n", ano);
  return 0;
}
