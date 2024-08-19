#include <stdio.h>
//Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.


int main() {
	float metros,dc,cm,mm;
	printf("Digite um valor em metros para fazer a conversao\n");
	scanf("%f",&metros);
	dc = metros*10;
	cm = metros*100;
	mm = metros*1000; 
	printf("O valor informado em dc, cm e mm eh respectivamente: %.2f, %.2f, %.2f",dc,cm,mm); //%.2f = 2 casas decimais
	return 0;
}
