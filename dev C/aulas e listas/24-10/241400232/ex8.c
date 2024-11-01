#include <stdio.h>
#include <string.h>

int main () {
	
	char str [30];
	
	printf("Por favor,digite o nome de um autor ");
	scanf("%s",str);
	
	//ponteiro armazena o endereço retornado pela função
	char *ptr = strchr(str,'a');
	
	if (ptr) {
		printf("Caracter 'a' ENCONTRADO dentro do nome %s",str);
	} else {
		printf("Caracter 'a' NAO ENCONTRADO dentro do nome %s",str);
	}
	

	return 0;
}
