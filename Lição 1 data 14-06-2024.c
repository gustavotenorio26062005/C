#include <stdio.h>

void maior(int num1,int num2){
  if(num1>num2){
    printf("numero %d eh maior que %d",num1,num2);
  }else{
    printf("numero %d eh maior que %d",num2,num1);
  }
}

int main(void) {
  int n1,n2;
  printf("Digite dois numeros\n");
  scanf(" %d %d",&n1,&n2);
  if(n1>0 && n2>0){
    maior(n1,n2);
  }
  return 0;
}