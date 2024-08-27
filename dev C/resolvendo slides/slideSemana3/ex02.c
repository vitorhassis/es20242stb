#include <stdio.h>

int main () {
	int n1;
	
	printf("Por favor, digite um valor numerico: \n");
	scanf("%d", &n1);
	
	if (n1%3 == 0 && n1%7 == 0) {
		printf("Divisivel por 3 e por 7!");
	} else printf ( "Nao e divisivel por 3 e por 7!");	
		
	return 0;
}
