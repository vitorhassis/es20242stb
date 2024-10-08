#include <stdio.h>


int main () {
	
float taxabase,taxaad,dist,total;

taxabase=60;
taxaad=0.3;


printf("digite a quantidade de km rodado para o calculo do valor total do aluguel: ");
scanf("%f",&dist);

total = (dist*taxaad) + taxabase;

printf("o valor total de aluguel do carro ficou em: R$%.0f,00",total);	
		
	return 0;
}
