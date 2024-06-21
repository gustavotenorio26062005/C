#include<stdio.h>

int main(void){
	int x,y,i,soma=0;
	printf("Entre com x: ");
	scanf("%d",&x);
	printf("Entre com y: ");
	scanf("%d",&y);
	if(x<y){
		for(i=x;i<y;i++){
			if(i%2!=0){
				soma+=i;				
			}
		}
		printf("A soma dos numeros impares entre eles eh: %d",soma);
	}

	return 0;
}
