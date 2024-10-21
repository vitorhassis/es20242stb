#include <stdio.h>

int main () {
	int x,soma;
	float num,media;
	soma=0; //tem q inicializar porque vai receber a soma dela mesma mais algo, que nesse caso, é o numero solicitado ao usuario
	x=0;
	do {
		printf("digite um numero: ");
		scanf("%f",&num);
		soma+=num;
		x++;
	} while (x<5);
	
	media = soma/5;
	
	printf("a media dos 05 valores informados, e de: %.2f",media);	
	
	return 0;
}
