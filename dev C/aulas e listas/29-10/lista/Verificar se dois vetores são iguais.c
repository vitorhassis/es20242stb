#include <stdio.h>


int main () {
	
	int vet1[5];
	int vet2[5];
	int res=1;
	
	for (int i=0; i<5; i++) {
		printf("Digite 5 valores para o vetor01: ");
		scanf("%d",&vet1[i]);	
	}
	
	printf("--------------------------------------\n");
	
	for (int i=0; i<5; i++) {
		printf("Digite 5 valores para o vetor02: ");
		scanf("%d",&vet2[i]);	
	}
	
	for (int i=0; i<5;i++) {
		if(vet1[i]!=vet2[i]) {
			res=0;
		}
	}
	
	if (res==1) {
		printf("\nvetores iguais!");
	} else {
		printf("\nvetores diferentes!");
	}
	
	
	return 0;
}
