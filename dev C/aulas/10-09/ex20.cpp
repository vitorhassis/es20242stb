
#include <stdio.h>


int main () {
	
int ano;

printf("digite um ano: ");
scanf("%d",&ano);	

if (ano>=0) {
	if (ano%4==0 || ano%4==0 && ano%100==0 && ano%400==0) {
		printf("ano bissexto");
	} else if (ano%4==0 && ano%100==0 && ano%400==1) {
		printf("ano NAO bissexto");
    } else {
    	printf("ano NAO bissexto");
    }
} else {
	printf("informe corretamente o dado.");
}
		
	return 0;
}
