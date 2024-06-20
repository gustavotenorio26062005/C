#include <stdio.h>

void exibirMensagem(){
  printf("Mensagem da função\n");
}
void efetuarSoma(){
  int valor1,valor2,soma;
  valor1=10;
  valor2=13;
  soma = valor1+valor2;
  printf("A soma é %i\n",soma);
}
void efetuarSub(int n1,int n2){
  int sub;
  sub =n1-n2;
  printf("A subtração é %i\n",sub);
}
void div(int num1,int num2){
  int divi;
  divi = num1/num2;
  printf("A divisão é %i\n",divi);
}
int vezes(int n1,int n2){
  int r;
  r = n1*n2;
  //printf("A multiplicação é %i\n",vezes);
  return r;
}

int main(void) {
  int num1, num2;
  scanf(" %i %i",&num1,&num2);
  exibirMensagem();
  efetuarSoma();
  efetuarSub(10,5);
  div(10,5);
  printf("Retorno %d",vezes(num1,num2));
  return 0;
}