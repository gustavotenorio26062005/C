#include<stdio.h>

int main(void){
	int n,i;
	float km,media=0;
	printf("Quantos dias de distancia serao registrados? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Digite a distancia percorrida no dia %d (em km): ",i);
	scanf("%f",&km);
	media+=km;
	}
	media/=i;
	printf("A media das distancias percorridas eh: %.2f ",media);
	
	return 0;
}
