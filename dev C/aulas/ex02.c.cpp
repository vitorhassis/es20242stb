#include <stdio.h>
//o cabeçalho da funcao sempre em cima do main, O QUE ELA FAZ fica ABAIXO do main
double soma(double x, double y);
double sub(double x, double y);
double mult (double x, double y);
double div (double x, double y);
double media (double x, double y);
double elev (double x, double y);
double porc (double x, double y);
int main() {
	double n1,n2;
	char calc;
	printf("Escolha uma operacao: \n+ adicao\n- subtracao\n* multiplicacao\n/ divisao\nM(media)\n^(elevado)NAO TA FUNCIONANDO\nP(porcentagem)\n");
	scanf("%c",&calc);
	
	printf("digite um valor: ");
	scanf("%lf",&n1); // EH LF POR ALGUM MOTIVO
	
	printf("digite outro valor: ");
	scanf("%lf",&n2);
	
	switch(calc) {
		case '+':
		  printf("a soma e = %.2f", soma(n1,n2));
		break;
		
		case '-':
		  printf("a subtracao e = %.2f", sub(n1,n2));
		break;
		
		case '*':
		  printf("a multiplicacao e = %.2f", mult(n1,n2));
		break;
		
		case '/':
			printf("a divisao e = %.2f", div(n1,n2));
		break;
		
		case 'M':
			printf("a media e = %.2f", media(n1,n2));
		break;
		
		case '^':
			printf("n1 elevado a n2 e = %2.f", elev(n1,n2));
		break;
		case 'P':
			printf("porcentagem e = %2.f", porc(n1,n2));
		break;
		
		default:
			printf("escolha apenas o que esta no menu e tente novamente");
		}		
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

double elev (double x, double y) {
}

double media (double x, double y) {
	return (x+y)/2;
}

double porc (double x, double y) {
	return (x/100)*y;
}
