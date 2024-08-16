#include <stdio.h>

 
	int main() {
	 
	int n1,n2,n3;
	float med;
	
	printf("Por favor, digite 3 numeros.\n");
	scanf("%d %d %d", &n1,&n2,&n3);
	med = (n1+n2+n3)/3;
	scanf("%f", &med);
	printf("A media dos 3 valores informados, eh de %f",med);
	
	
	 
	
	return 0;
}
