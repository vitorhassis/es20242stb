#include <stdio.h>


int calc (int x, int y);

int main () {

int qnt,terror,romance, valor;

printf("PRECOS: terror R$20,00 romance R$40,00\n");
printf("\n");
printf("descontos de 30 por cento se voce levar no minimo 2 livros de terror ou romance\n");
printf("\n");
printf("quantos livros de terror: ");
scanf("%d",&terror);
printf("\n");
printf("quantos livros de romance: ");
scanf("%d",&romance);
printf("\n");

qnt = romance + terror;

if (qnt>0 && qnt<6) {
	valor = calc(terror,romance);
} else {
	printf("voce so pode comprar no max 5 livros");
}

	return 0;
}


int calc (int x, int y) {
float total;
	if(x>=2 || y>=2) {
		printf("voce ganhou 30 por cento de desconto na compra dos livros.");
		total = ((x*20)+(y*40))*0.7;
		printf("preco final com o desconto:R$%.2f",total);
	} else {
		printf("voce nao ganhou desconto.");
		total = (x*20)+(y*40);
		printf("preco final:R$%.2f",total);
		
	}
	
	return total;
}
