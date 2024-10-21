#include <stdio.h>

int main () {

int soma;	

	
	for (int i = 0; i<=100; i++) {
		soma+= i;
		printf("%d+%d = %d\n",i,soma-i,soma);
	}
	
	
	
	
	
	return 0;
}
