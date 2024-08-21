//Escreva um algoritmo que leia um número real, n, e escreva “menor que 20”, “igual a 20” ou “maior que 20” se n < 20, n = 20 ou n > 20, respectivamente. 

#include <stdio.h>

int main () {
	float num;
	
	
	printf ("Por favor, digite um numero: ");
	scanf("%f",&num);
	
	if (num==20) {
		printf("O numero eh igual a 20");
	} else if (num<20) {
			printf ("O numero eh menor que 20");
		}	else printf("o numero informado eh maior que 20");
	}

