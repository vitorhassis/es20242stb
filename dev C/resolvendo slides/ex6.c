#include <stdio.h>
//Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e imprime no v�deo o correspondente em graus Celsius usando as f�rmulas que seguem.
//a) Usar uma vari�vel double para ler o valor em Fahrenheit e a f�rmula  C=(f-32.0) * (5.0/9.0).
//b) Usar uma vari�vel int para ler o valor em Fahrenheit e a f�rmula  C=(f-32)*(5/9).

int main () {
	
	float tempfah,tempcel;
	
	printf("Por favor, digite um valor em graus Fahrenheit \n");
	scanf("%f",&tempfah);
	tempcel = (tempfah - 32)*(5.0/9.0);
	printf("o valor informado em fahrenheit convertido em celsius, eh de: %.2f",tempcel);  
	return 0;
} 
