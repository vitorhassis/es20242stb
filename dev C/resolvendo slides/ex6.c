#include <stdio.h>

int main () {
	
	float tempfah,tempcel;
	
	printf("Por favor, digite um valor em graus Fahrenheit \n");
	scanf("%f",&tempfah);
	tempcel = (tempfah - 32)*(5.0/9.0);
	printf("o valor informado em fahrenheit convertido em celsius, eh de: %.2f",tempcel);  
	return 0;
} 
