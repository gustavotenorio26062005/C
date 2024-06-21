#include<stdio.h>

int main(void){
	int esc;
	float gas,km,cont,preco;
	printf("Escolha uma opcao:\n 1. Calcular consumo em km/l\n 2. Calcular consumo em l/100km\n"
	" 3. Calcular custo de viagem\n Opcao: ");
	scanf("%d",&esc);
	switch(esc){
		case 1:
			printf("Digite a distancia percorrida (km): ");
			scanf("%float",&km);
			printf("Digite a quantidade de combustivel consumido (litros): ");
			scanf("%float",&gas);
			cont=km/gas;
			printf("O consumo eh: %.1f km/l\n",cont);
		break;
				case 2:
			printf("Digite a distancia percorrida (km): ");
			scanf("%float",&km);
			printf("Digite a quantidade de combustivel consumido (litros): ");
			scanf("%float",&gas);
			cont=(gas/km)*100;
			printf("O consumo eh: %.1f l/100km\n",cont);
		break;
				case 3:
			printf("Digite a distancia percorrida (km): ");
			scanf("%float",&km);
			printf("Digite a quantidade de combustivel consumido (litros): ");
			scanf("%float",&gas);
			printf("Digite o preco do combustivel por (litros): ");
			scanf("%float",&preco);
			cont=(km/gas)*preco;
			printf("O custo da viagem foi: R$ %.2f",cont);
		break;
	}
	
	
	return 0;
}
