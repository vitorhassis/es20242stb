//Escreva um algoritmo que leia um n�mero inteiro positivo com tr�s d�gitos e escreva como sa�da �par� se o d�gito da centena � par e ��mpar� caso contr�rio. (Se o n�mero tiver mais que tr�s d�gitos ou menos, informe que s� aceita valores com tr�s d�gitos.)

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
