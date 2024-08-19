#include <stdio.h>
////ver se o numero escolhido da maq eh par ou impar

int main() {
	int n,resto;
	
	printf("Por favor, digite um valor: ");
	scanf("%d",&n);
	
	resto = n%2;
	
	if(resto == 0) {
		printf("O numero informado, eh par");
	} else if (resto == 1) {
		printf("O numero informado, eh impar");
	}	
	return 0;
}
