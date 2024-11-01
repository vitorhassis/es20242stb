#include <stdio.h>

int main () {
	
	int num[5];
	int temp;
	
	for(int i=0; i<5;i++) {
		printf("Digite o %d numero: ",i+1);
		scanf("%d",&num[i]);
	}
	//exercicio assim, tem q fazer dois fors. Um externo e um interno. O interno tem o j<4-i pq vc n vai comparar o ultimo elemento, ja que a comparação envolvendo o ultimo elemento será feito antes. A logica no if é: Se o numero da vez for maior que o proximo da
	//sequencia, vc guarda ele num temp, o q é maior vai pra posicao q ele era, e o maior vai pra posicao temp. Pensa na logica, tipo trocar crianças de uma fila, vc segura uma, bota a outra pra tras, e bota a q vc está segurando no lugar da que foi pra tras.
	for (int i=0; i<4; i++) {
		for (int j=0; j<4-i; j++) {
			if (num[j]>num[j+1]) {
				temp = num[j];
			num[j]=num[j+1];
			num[j+1] = temp;
			}	
		}
	}
		
	for (int i=0; i<5;i++) {
		printf(" \nem ordem crescente, temos: %d",num[i]);
	}
	return 0;
}
