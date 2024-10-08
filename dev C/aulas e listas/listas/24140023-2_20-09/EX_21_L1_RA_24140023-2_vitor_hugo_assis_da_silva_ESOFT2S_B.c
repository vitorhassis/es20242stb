#include <stdio.h> 


int main () {

	
	
int parc;
float emp,result;
result = 0;

printf("digite o valor do emprestimo: ");
scanf("%f",&emp);

printf("digite o numero de parcelas: ");
scanf("%d",&parc);

printf("juros e de 5 (por cento) mensais.\n");

result = (emp/parc);
result += result*0.05;

printf("ficaram %d parcelas de %.2f mensais",parc,result);

	
	return 0;
}
