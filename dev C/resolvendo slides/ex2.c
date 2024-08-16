#include <stdio.h>

int main() {
	int age;
	
	printf("Digite sua idade: ");
	scanf("%d",&age);
	age = (100-age);
	printf("faltam %d para chegar aos 100",age); 
	return 0;
}
