#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int valor, raiz;

    printf("Informe um n�mero para saber se ele � um quadrado perfeito: ");
    scanf(" %d", &valor);
    
    raiz = sqrt(valor);
    
    if(raiz*raiz == valor){
    
    printf("\n%d � um quadrado perfeito", valor);
    
}else printf("\n%d n�o � um quandrado perfeito", valor);

    return 0;
}
