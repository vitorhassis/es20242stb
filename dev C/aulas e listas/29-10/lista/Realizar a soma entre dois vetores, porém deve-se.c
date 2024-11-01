#include <stdio.h>

int main () {
	
	int num1[]={1,2,3,4,5};
	int num2[]={6,7,8,9,10};
	int num1Mod[5];
	int soma[5];
	int i;
	
	for (int i=0; i<5; i++) {
		num1Mod[i]=num1[i]+1;
	}
	
	for (int i=0; i<5; i++) {
		soma[i]=num1Mod[i]+num2[i];
	}
	
	printf("Primeiro vetor: ");
	for (int i=0; i<5; i++) {
		printf("%d ",num1[i]);
	}
	
	printf("\nPrimeiro vetor +1: ");
	for (int i=0; i<5; i++) {
		printf("%d ",num1Mod[i]);
	}
	
	printf("\nSegundo vetor: ");
	for (int i=0; i<5; i++) {
		printf("%d ",num2[i]);
	}
	
	printf("\nSoma/resultado: ");
	for (int i=0; i<5; i++) {
		printf("%d ",soma[i]);
	}
		
	return 0;
}
