#include <stdio.h>
#include <string.h>

int main () {
	
	int result;
	char str1[30];
	char str2[30];
	
	printf("Digite o primeiro livro ");
	scanf("%s",str1);
	
	printf("Digite o segundo livro ");
	scanf("%s",str2);
	
	result = strncmp(str1,str2,4);
	

	if (result==0) {
		printf("Os primeiros 4 caracteres dos nomes informados sao iguais ");
	} else {
		printf("Os primeiros 4 caracteres das nomes informados NAO sao iguais");
	}
	
	
	return 0;
}
