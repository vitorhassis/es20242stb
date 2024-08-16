#include <stdio.h>

int main () {
	char name [40]; //definindo um array de caracteres com 40 posições
	int age;
	
	printf("Por favor, digite seu nome: ");
	scanf("%s",&name);
	printf("Por favor, digite sua idade: ");
	scanf("%d",&age);
	printf("%s possui %d anos de idade",name,age) ;
	
	
	
	return 0;
}
 
