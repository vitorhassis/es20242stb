#include <stdio.h>
#include <string.h>

int main () {
	char str[30];
	int length; //costume de usar length pra tamanho, n é gpt eu juro
	
	printf("Digite uma string ");
	scanf("%s",str);
	
	length = strlen(str);
	
	printf("%s = %d",str,length);
	
	return 0;
}
