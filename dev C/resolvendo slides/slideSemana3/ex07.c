#include <stdio.h>
//if (n1^2==n2^2+n3^2 || n2^2==n1^2+n3^2 || n3^2==n1^2+n2^2) { eu fiz assim, mas nao tem nessa biblioteca o ^=elevado. Ent vamos usar um macete para resolver isso!
int main () {
	
int n1,n2,n3,n1elev,n2elev,n3elev;

printf("Por favor, digite o primeiro lado do triangulo:\n");
scanf("%d",&n1);
printf("Por favor, digite o segundo lado do triangulo:\n");
scanf("%d",&n2);
printf("Por favor, digite o terceiro lado do triangulo:\n");
scanf("%d",&n3);

n1elev= n1*n1;
n2elev= n2*n2;
n3elev= n3*n3;

if (n1elev==n2elev+n3elev || n2elev==n1elev+n3elev || n3elev==n1elev+n2elev) {
	printf("Os lados condizem com um triangulo retangulo");
} else printf("Os lados nao condizem com um triangulo retangulo");	
	return 0;
}
