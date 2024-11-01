#include <stdio.h>
#include <string.h>

int main () {
	
	char nome[]= "Napoleon";
	char sobrenome[]= " Hill";
	
	printf("resultado: %s", strcat(nome,sobrenome));
	
	return 0;
}
