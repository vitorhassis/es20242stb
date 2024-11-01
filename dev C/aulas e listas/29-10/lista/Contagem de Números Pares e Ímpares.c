#include <stdio.h>

int main () {
	
	int vetNum[10];
	int contPar=0;
	int contImpar=0;
	
	for (int i=0; i<10; i++) {
		printf("Digite 10 numeros. Digite o %d valor: ",i+1);
		scanf("%d",&vetNum[i]);
	}
	
	for (int i=0; i<10; i++) {
		if (vetNum[i]%2==0) {
			contPar++;	
		} else {
			contImpar++;
		}
	}
	
	printf("\ntemos:\nPAR = %d\nIMPAR = %d",contPar,contImpar);
	
	return 0;
}
