#include <stdio.h>
//Escreva um algoritmo que leia um n�mero inteiro positivo com tr�s d�gitos e escreva como sa�da �par� se o d�gito da centena � par e ��mpar� caso contr�rio. (Se o n�mero tiver mais que tr�s d�gitos ou menos, informe que s� aceita valores com tr�s d�gitos.)

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
