#include<stdio.h>

int main(void){
	int n,i;
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("Os numeros diisores de %d sao: ",n);
	for(i=1;i<=n;i++){
		if(n%i==0){		
			printf("%d ",i);
		}
	}
	return 0;
}
