#include <stdio.h>


int main() {
	
int num1,num2,maior,menor;

printf("digite dois valores: ");
scanf("%d %d",&num1,&num2);

maior=num1;

if (num2>maior) {
	maior=num2;
	menor=num1;
	printf("%d e maior que %d",maior,menor);
} else if (num2<maior) {
	menor = num2;
	printf("%d e maior que %d",maior,menor);
} else {
	printf("numero iguais");
}
	
	return 0;
}
