#include <stdio.h> 



int main () {
	
char pacotes;
int qnt;
float valor;

printf("escolha os pacotes de viagem a seguir:\n\n");
printf("A)Sao Paulo R$1300,00\nB)Rio De Janeiro R$ 2000,00\nC)Brasilia R$1700,00\n");
scanf("%c",&pacotes);

printf("segue os descontos relativos a quantidade de pessoas: ");
printf("\n");
printf("A)MAX 5 PESSOAS = 15por cento\nB)MAX 10 PESSOAS = 25 por cento\nC)MAX 15 PESSOAS = 35 por cento\n");
printf("\n");
scanf("%d",&qnt);	
	
if (qnt<=5 && pacotes=='A') {
    valor = 1300*0.85;
    printf("valor final: R$%.2f",valor);	
} else if (qnt<=10 && pacotes=='A'){
    valor = 1300*0.75;
	printf("valor final: R$%.2f",valor);	
} else if (qnt<=15 && pacotes=='A') {
	valor = 1300* 0.65;
	printf("valor final: R$%.2f",valor);
} else if (qnt<=5 && pacotes=='B'){
    valor = 2000*0.85;
	printf("valor final: R$%.2f",valor);	
} else if (qnt<=10 && pacotes=='B') {
	valor = 2000* 0.75;
	printf("valor final: R$%.2f",valor);
} else if (qnt<=15 && pacotes=='B'){
    valor = 2000*0.65;
	printf("valor final: R$%.2f",valor);	
} else if (qnt<=5 && pacotes=='C') {
	valor = 1700* 0.85;
	printf("valor final: R$%.2f",valor);
}else if (qnt<=10 && pacotes=='C'){
    valor = 1700*0.75;
	printf("valor final: R$%.2f",valor);	
} else if (qnt<=15 && pacotes=='C') {
	valor = 1700* 0.65;
	printf("valor final: R$%.2f",valor);
}	else {
	printf("PRESTE ATENCAO NAS OPCOES");
}
	return 0;
}
