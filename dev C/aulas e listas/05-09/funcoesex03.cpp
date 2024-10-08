#include <stdio.h>


int parImp(int x);


int main () {
	
int	num,imPar;

printf("digite um numero: ");
scanf("%d",&num);
		
imPar = parImp(num);

if (imPar == 1) {
	printf("%d",imPar);
} else {
	printf("%d",imPar);
}

	return 0;

}

int parImp(int x) {
	
	if(x%2==0){
		return 1;
	} else {
		return 0;
	}
		
}
