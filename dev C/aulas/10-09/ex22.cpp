#include <stdio.h>


float celfah (float x);
float fahcel (float y);


int main () {

int op;
float temp,calcCF,calcFC;


printf("digite 0 para C-->F ou digite 1 para F-->C: ");
scanf("%d",&op);
printf("digite a temperatura para a conversao: ");
scanf("%f",&temp);

 if (op==0) {
	calcCF = celfah(temp); //vale lembrar que funcao, tirando o tipo void, sempre vai te retornar um valor. Ent no caso, chamamos a funcao e ela "automaticamente" realiza um conjunto de ações que definimos, e te retorna algo. nesse caso, ela retorna o resultado dos calculos de conversoes que defini la em baixo
	printf("%.1f FAHRENHEIT",calcCF);
} else if (op==1) {
	calcFC = fahcel(temp);
	printf("%.2f CELSIUS",calcFC);
} else {
	printf("use apenas 0 ou 1 como opcao!");
}

	return 0;
	
	}
	
float fahcel (float y) {
float result;
	result = (y-32)/1.8;
	return result;
}	
	
	
float celfah (float x) {
float result;		
	result = (x*1.8)+32;	
	return result;
}
