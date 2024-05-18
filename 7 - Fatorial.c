#include <stdio.h>

int main(void) {
  int num,i;
  printf("Digite um número: ");
  scanf("%d",&num);
  i=num-1;
  while(i>0){
    num*=i;
    i--;
  }
  printf("O fatorial do número digitado é: %d\n",num);
  return 0;
}