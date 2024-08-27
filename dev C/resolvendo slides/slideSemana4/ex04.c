//Escreva um algoritmo que leia um número inteiro positivo com três dígitos e escreva como saída “par” se o dígito da centena é par e “ímpar” caso contrário. (Se o número tiver mais que três dígitos ou menos, informe que só aceita valores com três dígitos.)

#include<stdio.h>

//so nao entendi o pq o tipo da funcao cent_par eh void e nao int = entendi, ELA NAO RETORNA ND;


void cent_par (int valor) {
int cent;
	cent=valor/100;
	if (cent%2==0){
	printf("O digito da centena eh par");
	}else 
	printf("O digito da centena eh impar");		
}


int main () {
	int num;
	printf("Por favor, digite um numero de 3 digitos: ");
	scanf("%d",&num);
	if (num>99 && num<1000) { 
	cent_par(num);
	} else printf("O valor nao se encontra dentro do limite estabelecido!");	
	return 0;
}
