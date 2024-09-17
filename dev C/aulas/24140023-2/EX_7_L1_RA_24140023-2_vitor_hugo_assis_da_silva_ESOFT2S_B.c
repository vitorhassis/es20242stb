#include <stdio.h>
#include <string.h>
int main() {

char usuario1[40];
char senha1[40];

printf("digite o usuario e senha: ");
scanf("%s%s",&usuario1,senha1);

if (strcmp(usuario1,"abc")==0 && strcmp(senha1,"abcde")==0) {
	printf("acesso concedido");
} else {
	printf("acesso negado");
}




    return 0;
}
