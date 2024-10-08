#include <stdio.h>

int areaCirc (int x);


int main () {
float raio,calcArea;

printf("por favor, digite um valor para o raio da circunferencia: ");
scanf("%f",&raio);

calcArea = areaCirc(raio);

printf("a area do circulo e: %.1f u.a (Unidade de Area)",calcArea);		
	return 0;
}


int areaCirc(int x) {
float pi,area;
pi = 3.14;
area = pi*(x*x);
return area;	
}
