#include <stdio.h>


int main () {
float num,parteDec;
int parteInt;

//inicializando as variaveis
parteInt=0;
parteDec=0;

printf ("digite um numero real: ");
scanf("%f",&num);

//isso se chama casting. Estamos convertendo/pegando a parte inteira de num. Nao funcionaria se fisse (float)num, porque ai ele esta convertendo o numero para o tipo float. Em char, cai naquela ideia da tabela ASCII. Ex = valorASCII = (int)string, onde string no caso seria uma frase, letra. O contrario tbm funciona = caractere = (char)valorASCII.	
parteInt = (int)num; 
	
parteDec = num - parteInt;	
	
printf("%d representa a parte inteira, e %.2f representa a parte decimal", parteInt,parteDec);	
	
return 0;
}
