#include <stdio.h>

int main () {
	
	int tam;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tam);
	
	int vet1[tam];

	//atentar-se ao & no scanf, esqueço de por
	for (int i=0; i<tam; i++) {
		printf("Digite o %d valor: ",i+1);
		scanf("%d",&vet1[i]);
	}
	
	//tem q declarar qm é maior e menor depois de preencher o vetor, e n antes
	int maior=vet1[0];
	int menor=vet1[0];
	
	for (int i=0; i<tam; i++) {
		if (vet1[i]>maior) {
			maior = vet1[i];
		} else if (vet1[i]<menor){
			menor=vet1[i];
		}
	}	
	
	printf("MAIOR:%d\nMENOR:%d",maior,menor);
	
	return 0;
}
