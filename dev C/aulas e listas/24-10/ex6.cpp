#include <stdio.h>
#include <string.h>


int main () {
	
	char str1[30];
	char str2[30];
	
	printf("Digite o nome de um autor ");
	scanf("%s",str1);
	
	printf("Digite o nome de outro autor ");
	scanf("%s",str2);
	
	printf("resultado: %s",strncat(str1, str2,3));
	

	return 0;
}
