#include <stdio.h>
//ta funcionando em partes, mas n ta dando pra achar a posicao se for 2 3 4 ... = CORRIGI
int main () {
	
	char dados [20];
	int x;
	
	printf("Digite uma string de letras e numeros: ");
	scanf("%s",dados);
	
	 for (int i = 0; dados[i] != '\0'; i++) {
        if (dados[i] >= '0' && dados[i] <= '9') {  //verifica direto se eh um numero
            printf("O numero %c esta na posicao = %d\n", dados[i], i);
        }
    }	
		
	return 0;
}
