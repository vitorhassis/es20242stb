#include <stdio.h>
//digite 6 numeros e apresente qual é o maior 
int main () {
int n1,n2,n3,n4,n5,n6;		

printf ("Digite o primeiro numero: ");	
scanf("%d",&n1);
printf ("Digite o segundo numero: ");	
scanf("%d",&n2);
printf ("Digite o terceiro numero: ");	
scanf("%d",&n3);	
printf ("Digite o quarto numero: ");	
scanf("%d",&n4);	
printf ("Digite o quinto numero: ");	
scanf("%d",&n5);	
printf ("Digite o sexto numero: ");	
scanf("%d",&n6);

	if (n1==n2 && n1==n3 && n1==n4 && n1==n5 && n1==n6) {
		printf("Os numeros sao iguais");
	} 
	else if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n1>n6){	
	  printf("%d",n1);
	}	
	else if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n2>n6) {
	  printf("%d",n2);
	}	
	else if (n3>n1 && n3>n2 && n3>n4 && n3>n5 && n3>n6) {
 	  printf("%d",n3);
	}	
	else if (n4>n1 && n4>n2 && n4>n3 && n4>n5 && n4>n6) {
	  printf("%d",n4);
	}	
	else if (n5>n1 && n5>n2 && n5>n3 && n5>n4 && n5>n6) {
	  printf("%d",n5);
	}	
	else if(n6>n1 && n6>n2 && n6>n3 && n6>n4 && n6>n5) {
	  printf("o maior numero e:\n%d",n6);
	}	
	
return 0;
}
