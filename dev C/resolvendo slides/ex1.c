#include <stdio.h>
//Escreva um programa na linguagem C que receba o nome e a idade de uma pessoa. Como sa�da, fa�a uma sauda��o a ela (pelo nome) informando a sua idade. (Nome � uma String e idade � um inteiro).
int main () {
	char name [40]; //definindo um array de caracteres com 40 posi��es
	int age;
	
	printf("Por favor, digite seu nome: ");
	scanf("%s",&name);
	printf("Por favor, digite sua idade: ");
	scanf("%d",&age);
	printf("%s possui %d anos de idade",name,age) ;
	
	
	
	return 0;
}
 
