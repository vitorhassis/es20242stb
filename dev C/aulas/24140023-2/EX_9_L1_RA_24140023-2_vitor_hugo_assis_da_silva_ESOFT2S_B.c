#include <stdio.h>
#include <locale.h>

int primo(int num, int divisor){
	
	if(num <= 1) return 0;
	if(divisor == 1) return 1;
	if(num%divisor ==0) return 0;
	return primo(num, divisor - 1);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n1;

    printf("Informe um n�mero para saber se ele e primo: ");
    scanf(" %d", &n1);
    
    if(primo(n1, n1- 1)){
    	
    	printf("\n%d � um n�mero primo\n", n1);
    	
	}else{
		
		printf("\n%d n�o � um n�mero primo\n", n1);
	}
	
    return 0;
}
