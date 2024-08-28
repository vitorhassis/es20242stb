#include <stdio.h>
//peça 5 numeros e apresente a media destes, usando apenas duas variaveis

int main () {
// como é pedido apenas o uso de 2 variaveis, fizemos assim: 	
int som,num;
printf("Por favor, digite um numero: "); //para nao precisar inicializar a variavel som (somador), podemos fazer desse jeito. A primeira variavel voce ja guarda na variavel somador. Assim, nao é necessario inicializar a variavel;
scanf("%d",&som);
printf("Por favor, digite um numero: ");
scanf("%d",&num);
som+=num;
printf("Por favor, digite um numero: ");
scanf("%d",&num);
som+=num;
printf("Por favor, digite um numero: ");
scanf("%d",&num);
som+=num;
printf("Por favor, digite um numero: ");
scanf("%d",&num);
som+=num;
printf("A media dos 5 valores apresentados e de: %d", som/num);		
	return 0;
}
