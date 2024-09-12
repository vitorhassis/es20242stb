#include <stdio.h>


int main () {
	
char user1[40];
char senha1[40];
char usuario,senha;

usuario="ferlini";
senha="abc";

printf("digite o usuario: ");
scanf("%s",&user1);
printf("digite a senha: ");
scanf("%s",&senha1);


if (user1=usuario && senha1=senha) {
	printf("acesso concedido");
} else {
	printf("acesso negado");
}			
	return 0;
}
