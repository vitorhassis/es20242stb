#include <stdio.h>
//Escreva um algoritmo que leia um número inteiro positivo com três dígitos e escreva como saída “par” se o dígito da centena é par e “ímpar” caso contrário. (Se o número tiver mais que três dígitos ou menos, informe que só aceita valores com três dígitos.)

int main() {
	
int n1,cent;

printf ("Por favor, digite um valor de restritamente 3 digitos: \n");
scanf("%d",&n1);	

if (n1>99 && n1<1000) {
cent= (n1/100)%10;
	if (cent%2==0) {
	printf("PAR\n");
	} else printf ("IMPAR\n");	
} else printf ("Atente-se ao limite estabelecido e tente novamente!");	
	return 0;
}
