#include <stdio.h> 



int main () {
	
char pacotes;
int qnt;
float valor;

printf("escolha os pacotes de viagem a seguir(A ou B MAIUSCULO):\n");
printf("A)Sao Paulo R$1300,00\nB)Rio De Janeiro R$ 2000,00\n");
scanf("%c",&pacotes);

printf("segue os descontos relativos a quantidade de pessoas(informe a quantidade de pessoas):");
printf("\n");
printf("5 PESSOAS = 15 por cento\n10 PESSOAS = 25 por cento");
printf("\n");
scanf("%d",&qnt);	
	
if (pacotes=='A' && qnt==5) {
	valor = 1300*0.85;
	printf("valor total cada:R$%.2f",valor);
} else if (pacotes=='A' && qnt==10) {
	valor = 1300*0.75;
	printf("valor total cada:R$%.2f",valor);
} else if (pacotes=='B' && qnt==5) {
	valor = 2000*0.85;
	printf("valor total cada:R$%.2f",valor);
} else if (pacotes=='B' && qnt==10) {
	valor = 2000*0.75;
	printf("valor total cada:R$%.2f",valor);
} else if ((pacotes!='A') && (pacotes!='B') || (qnt!=5) && (qnt!=10)) {
	printf("atente-se as opcoes disponiveis.");
}
	return 0;
}
