//Escreva  uma função que receba 4 números e uma letra. (A, P ou H): 
//Caso seja A: média aritmética simples.
//Caso seja P: a resposta é a média ponderada (pesos: 2, 3, 5, 10)
//Caso seja H: a sua média harmônica.


#include <stdio.h>

int main() {
	float n1,n2,n3,n4,ma,mp,mh;
	char letra, A,P,H;
	
	
	printf( "Por favor, digite um valor: ");
	scanf("%f",&n1);
	
	printf( "Por favor, digite um segundo valor: ");
	scanf("%f",&n2);
	
	printf( "Por favor, digite um terceiro valor: ");
	scanf("%f",&n3);	
	
	printf( "Por favor, digite um quarto valor: ");
	scanf("%f",&n4);	
	
	printf("Por favor, digite uma letra dentre as opções a seguir: \n A-media aritmetica simples \n P-media ponderada (pesos: 2,3,5,10) \n H-media harmonica: \n");
	scanf("%s", &letra);
	
	
	if (letra == 'A'){
		ma = (n1+n2+n3+n4)/4;
		printf("O resultado da media aritmetica simples, eh de: %.2f",ma);
	} else if (letra == 'P') {
		mp = ((n1*2)+(n2*3)+(n3*5)+(n4*10))/20;
		printf("O resultado da media ponderada, eh de: %.2f",mp);
	} else if (letra == 'H') {
		mh = 4/((1/n1)+(1/n2)+(1/n3)+(1/n4));
		printf("O resultado da media harmonica eh de: %.2f",mh);
	}
			
	return 0;
}

