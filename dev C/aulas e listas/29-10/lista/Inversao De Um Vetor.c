#include <stdio.h>

int main () {
	
	int tam;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tam);
	
	float vet1[tam];
	float vet2[tam];
	
	for (int i=0; i<tam; i++) {
		printf("Digite o %d numero: ",i+1);
		scanf("%f",&vet1[i]);
	}
	
	for (int i=0; i<tam; i++) {
		vet2[i]=vet1[tam-1-i];
	}
	
	//vet2[i] = inverso vai preencher normal. Mas pra isso, vamos pegar o vet1, o seu tamanho -1 (pelo vetor inverso começar em zero) -i pra ir literalmente preenchendo ao inverso. O primeiro ser o ultimo, o segundo o penultimo, e assim vai. Se fizer no papel da pra
	//pegar a logica melhor ainda
	
	printf("vetor inverso =\n");
	for (int i=0; i<tam; i++) {
		printf("%.0f\n",vet2[i]);
	}
	
	return 0;
}
