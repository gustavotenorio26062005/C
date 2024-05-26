#include <stdio.h>
#define TAM 10
int main(void) {
  int i;
  float valores[TAM];
  for(i =0;i<TAM;i++){
    scanf(" %f",&valores[i]);
  }
  for(i =0;i<TAM;i++){
    printf("%.2f\n",valores[i]);
  }
  for(i =TAM-1;i>-1;i--){
    printf("%.2f\n",valores[i]);
  }
  return 0;
}