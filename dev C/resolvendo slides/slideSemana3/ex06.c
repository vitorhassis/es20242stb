#include <stdio.h>

int main() {
	
float n1,n2,n3;

printf("Por favor, digite o primeiro numero: ");
scanf("%f",&n1);
printf("Por favor, digite o segundo numero: ");
scanf("%f",&n2);
printf("Por favor, digite o terceiro numero: ");
scanf("%f",&n3);

if (n1>n2 && n2>n3) { //n3>n2 ou n1<n3
	printf("%.0f\n%.0f\n%.0f\n",n1,n2,n3);
} if (n2>n1 && n2>n3 && n1>n3) {
      printf("%.0f\n%.0f\n%.0f\n",n2,n1,n3);
}	if (n2>n1 && n2>n3 && n1<n3) {
       	printf("%.0f\n%.0f\n%.0f\n",n2,n3,n1);
}	  if (n3>n1 && n3>n2 && n1>n2) {
	  	 printf("%.0f\n%.0f\n%.0f\n",n3,n1,n2); 
}		if (n3>n1 && n3>n2 && n1<n2) {
			printf("%.0f\n%.0f\n%.0f\n",n3,n2,n1);
}		
	return 0;
}
