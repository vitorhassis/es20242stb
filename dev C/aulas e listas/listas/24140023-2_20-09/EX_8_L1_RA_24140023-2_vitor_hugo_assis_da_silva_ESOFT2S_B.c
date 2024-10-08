#include <stdio.h>


int main () {
//distancia, consumo,litro de gas gasto, preco gasolina, custo total da viagem	
float dist,cons,litro,precogas,custoviag;	
litro=0;
custoviag=0;	
printf("para o calculo do custo total de uma viagem, digite a distancia percorrida em km: ");
scanf("%f",&dist);

printf("para o calculo do custo total de uma viagem, digite com quantos km seu veiculo faz com 1 litro: ");
scanf("%f",&cons);

printf("para o calculo do custo total de uma viagem, digite o preco da gasolina: ");
scanf("%f",&precogas);

litro=dist/cons;

custoviag=litro*precogas;	

printf("o custo da viagem e de: R$%.0f,00",custoviag);	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
