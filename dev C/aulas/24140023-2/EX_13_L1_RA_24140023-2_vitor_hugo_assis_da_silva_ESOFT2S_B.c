#include <stdio.h>


int main () {
	
int pontostot,pontos;


pontostot=0;

if (pontos>=0 && pontos<=10) {
printf("digite a quantidade de pontos do funcionario 01 (0-10): ");
scanf("%d",&pontos);
pontostot = pontostot + pontos;	
	
printf("digite a quantidade de pontos do funcionario 02 (0-10): ");
scanf("%d",&pontos);
pontostot = pontostot + pontos;	
		
	
printf("digite a quantidade de pontos do funcionario 03 (0-10): ");
scanf("%d",&pontos);
pontostot = pontostot + pontos;	
		
	
printf("digite a quantidade de pontos do funcionario 04 (0-10): ");
scanf("%d",&pontos);
pontostot = pontostot + pontos;	
		
printf("digite a quantidade de pontos do funcionario 05 (0-10): ");
scanf("%d",&pontos);
pontostot = pontostot + pontos;
} else {
	printf("atente-se ao limite estabelecido.");	
}
		
if (pontostot<=5) {
	printf("PREMIACAO NIVEL 3: bonus de RS100,00 no salario");
} else if (pontostot<=7) {
	printf("PREMIACAO NIVEL 2: bonus de R$250,00 no salario");
} else {
	printf("PREMIACAO NIVEL 1: Parabens, bonus de R$500,00 no salario");
}

	
	return 0;
}
