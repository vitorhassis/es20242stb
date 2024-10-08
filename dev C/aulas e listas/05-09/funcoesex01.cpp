#include <stdio.h>

int retornemaior (int x,int y);


int main () {
	
int num1,num2,nummaior;	
	
printf("digite dois numeros: ");
scanf("%d%d",&num1,&num2);

nummaior = retornemaior(num1,num2);	
	
printf("o maior valor e: %d",nummaior);	

	
	return 0;
}



int retornemaior (int x, int y) {
int maior;

if (x>y) {
	maior = x;	
} else if (x<y) {
	maior = y;
} else if (x==y) {
	maior=x; //aq garantimos q em todos os casos a funcao vai retornar algo. Msm q talvez n faca tanto sentido;
	printf("valores iguais");
}

	return maior;
}
