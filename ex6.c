#include<stdio.h>
#define TAM 10
int main(void){
	int i;
	float temp[TAM], maior, menor;
	for(i=0;i<TAM;i++){
		printf("Digite uma temperatura: ");
		scanf("%f",&temp[i]);
		if(i==0 || temp[i] < menor) menor = temp[i];
		if(i==0 || temp[i] > maior) maior = temp[i];
	}
	printf("As temperaturas lidas foram : ");
		for(i=0;i<TAM;i++){
		printf("%.2f ",temp[i]);
	}
	printf("\nA maior temperatura foi de: %.2f \n",maior);
	printf("A menor temperatura foi de: %.2f \n",menor);

	return 0;
}
