
#include <stdio.h>


int main () {

int op;	
float tempcel,tempfah,calc;

printf("digite 1 se quer converter C->F\ndigite 2 se quer converter F->C\n");
scanf("%d",&op);

if (op==1) {
	printf("digite o valor em graus celsius: ");
	scanf("%f",&tempcel);
	calc = (tempcel*1.8)+32;
	printf("%.0f C -> %.0f F",tempcel,calc);
} else if (op==2) {
	printf("digite o valor em fahrenheit: ");
	scanf("%f",&tempfah);
	calc = (tempfah-32)/1.8;
	printf("%.0f F -> %.0f C",tempfah,calc);
} else {
	printf("informe apenas 1 ou 2 como opcao");
}
		
	return 0;
}
