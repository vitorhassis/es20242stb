#include <stdio.h>

int main () {
	
	int tamVetor;
	float media;
	float soma=0;
	
	printf("Por favor, digite a quantidade de notas que deseja inserir: ");
	scanf("%d",&tamVetor);
	
	float vetNotas[tamVetor];	
	
	for (int i=0; i<tamVetor; i++) {
		printf("Digite a %d nota: ",i+1);
		scanf("%f",&vetNotas[i]);
		soma+=vetNotas[i];
	}
	
	media=soma/tamVetor;
	
	printf("Temos como media dos valores informados: %.2f",media);
	
	
	return 0;
}
