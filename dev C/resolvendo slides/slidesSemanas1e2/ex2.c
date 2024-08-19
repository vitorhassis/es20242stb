#include <stdio.h>
//Modifique o programa para informar quantos anos falta para ela chegar a 100 anos. (Assumindo que ninguém digitará um valor inteiro maior que 100)
int main() {
	int age;
	
	printf("Digite sua idade: ");
	scanf("%d",&age);
	age = (100-age);
	printf("faltam %d para chegar aos 100",age); 
	return 0;
}
