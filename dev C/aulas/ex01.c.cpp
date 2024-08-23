#include <stdio.h>
//o cabeçalho da funcao sempre em cima do main, O QUE ELA FAZ fica ABAIXO do main
double soma(double x, double y);
double sub(double x, double y);
double mult (double x, double y);
double div (double x, double y);
int main() {
	
	printf("sub = %.2f\n",sub(3,2));
	printf("soma = %.2f\n",soma(5,2));
	printf("multiplicacao= %.2f\n",mult(5,5));
	printf("divisao= %.wf",div(100,25)); 
	return 0;
}

double soma(double x, double y) {
	return x+y;
}

double sub(double x, double y) {
	return x-y;
}

double mult (double x, double y) {
	return x*y;
}

double div (double x, double y) {
	return x/y;
}



