#include <stdio.h>



int main () {

int qntlivros,terror,romance;
float total;

printf("livro de terror: R$10,00 livro de romance: R$15,00\n");
printf("desconto de 10 por cento se voce comprar 5 livros (terror e romance)\ndesconto de 20 por cento se voce comprar 10 livros(terror e romance)\n");
printf("quantos livros voce comprou?");
scanf("%d",&qntlivros);
printf("quantos livros de terror e romance voce comprou?: ");
scanf("%d%d",&terror,&romance);


if(qntlivros>=5 && qntlivros<10) {
	total = (terror*10)+(romance*15);
	printf("desconto de 10 por cento. valor final:R$%.2f",total*0.9);
} else if(qntlivros>=10) {
	total = (terror*10)+(romance*15);
	printf("desconto de 20 por cento. valor final:R$%.2f",total*0.8);
} else if (qntlivros<5){
	total = (terror*10)+(romance*15);
	printf("sem desconto. valor final R$%.2f",total);
}

	return 0;
}
