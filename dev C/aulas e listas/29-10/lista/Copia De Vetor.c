#include <stdio.h>

int main() {
	
	int tam;
	
	
	printf("Digite o tamanho de um vetor: ");
	scanf("%d",&tam);
	
	float vet1[tam];
	float vet2[tam];
	
	for (int i=0;i<tam;i++) {
		printf("digite o %d valor: ",i+1);
		scanf("%f",&vet1[i]);
	}
	
	for (int i=0;i<tam;i++) {
		 vet2[i]=vet1[i];
	}
	
	printf("elementos do vetor copiado:\n");
	for (int i=0;i<tam;i++) {
		printf("%.0f\n",vet2[i]);
	}
	
	return 0;
}
