#include <stdio.h>

int main(void) {
  int x,y;
  printf("Digite dois valores: \n");
  scanf("%d %d",&x,&y);
  while(x<y){
    printf("Digite um novo valor para a segunda opção: ");   
    scanf("%d",&y);
  }
  printf("O segundo valor: %d\nÉ menor que o primeiro %d\n",y,x);
  return 0;
}