#include <stdio.h>


int main () {	
int camiseta,tenis;
float result;

printf("camiseta R$50,00 e tenis R$80,00\n\n");

printf("descontos disponiveis:\nA)3 camisetas e 3 tenis = 30 por cento de desconto.\nB)5 camisetas = 15 por cento de desconto\nC)3 tenis = 10 por cento de desconto\n");
printf("\n");
printf("quantas camisetas e tenis voce comprou:\n");
scanf("%d%d",&camiseta,&tenis);

if (camiseta==5 && tenis==0) {
	result=(5*50)*0.85;
	printf("total da compra: R$%.2f",result);
} else if (camiseta==3 && tenis==3) {
	result=((3*50)+(3*80))*0.7;
	printf("total da compra: R$%.2f",result);
} else if (camiseta==0 && tenis ==3) {
	result=(3*80)*0.9;
	printf("total da compra: R$%.2f",result);
} else {
	result=(camiseta*50)+(tenis*80);
	printf("total da compra: R$%.2f",result);
}
	
	return 0;
}

