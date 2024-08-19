//Solicite 3 números para uma “pessoa” e informe o maior e o menor deles, usando a linguagem C.

#include <stdio.h>

int main () {
	int maior,menor,valor;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&valor);
	maior = valor;
	menor = valor;
	
	printf("Digite o segundo valor: ");
	scanf("%d",&valor);
	
	if(valor>maior) {
		maior = valor;
	}
	
	if(valor<menor) {
		menor = valor;
	}
	
	printf("Digite o terceiro valor: ");
	scanf("%d",&valor);
	
	if(valor>maior) {
		maior = valor;
	}
	
	if(valor<menor) {
		menor = valor;
	}
	
	printf("Temos entao, o menor %d e o maior %d dentre os valores fornecidos pelo usuario", menor, maior);
	
	
	return 0; 
	
	
}
