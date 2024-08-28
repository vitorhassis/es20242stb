#include <stdio.h>
//agora é pra usar uma funcao que indique qual numero dos 6 é maior, sem usar laço de repeticao
int biggernumber (int n1, int n2, int n3, int n4, int n5, int n6); //aq dentro do parametro da funcao, as variaveis sao apenas PARAMETROS, ent n precisa ter a mesma nomenclatura das variaveis referente aos valores numericos. Poderia ser (int a, int b, int c, (...);
//DECLARANDO A FUNÇÃO (sempre em cima do MAIN)

int main () {
int maior, n1,n2,n3,n4,n5,n6;

printf("Digite seis numeros:\n");
scanf("%d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6);
//chamar a funcao, que no caso vai possuir o seu resultado/return armazenado numa variavel chamada maior, que depois vai ser usada para mostrar o maior valor da sequencia;
maior = biggernumber (n1,n2,n3,n4,n5,n6); //aq, oq tem dentro dos parametros da funcao sao os ARGUMENTOS, ou seja, as reais variaveis que serao utilizadas nela;
printf("O maior numero da sequencia e: %d", maior);
return 0;
}

//DEFININDO A FUNÇÃO, ou seja, O QUE ELA VAI REALIZAR (sempre em baixo do MAIN)
int biggernumber (int n1, int n2, int n3, int n4, int n5, int n6) {
int maior = n1;
//poderia verificar com else if, mas pode ter casos em que voce quer verificar todos os valores, independente se encontrar o valor maior antes;
	if (n2>maior) {
		maior = n2;
	} 
	if (n3>maior) {
		maior = n3;
	} 
	if (n4>maior) {
		maior = n4;
	}
	if (n5>maior) {
		maior= n5;
	}
    if (n6>maior) {
		maior = n6; 
	}	
	return maior; //a funcao retorna sempre alguma coisa, mas só é possível usar 1 return em uma função. Tinha feito antes, um return maior dentro de cada if, e nao faz sentido e nem é possível;
}
