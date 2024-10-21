#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
	
	int numEscolhido,escolha;
	
	//tive que pesquisar pra conseguir adicionar essas duas bibliotecas extras que permitem a funcionalidade do rand. No caso, o srand, permite que novos numeros aleatorios sejam escolhidos. Confesso que essa parte eu tive que ver na internet, até porque nao 
	//aprendemos, mas o resto segue lógica que ja fizemos antes
	srand(time(0)); 
    numEscolhido = (time(0) % 10) + 1;	
	
	do {
		printf("Tente acertar o mesmo numero que a maquina escolheu. Digite um numero entre 0 e 10:\n");
		scanf("%d",&escolha);
		if(numEscolhido==escolha) {
			printf("Acertou!");
		} else {
			printf("Errou, tente novamente!\n");
		}
	} while (numEscolhido!=escolha);
		
	return 0;
}
