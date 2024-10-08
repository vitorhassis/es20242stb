#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int valor, raiz;

    printf("Informe um número para saber se ele é um quadrado perfeito: ");
    scanf(" %d", &valor);
    
    raiz = sqrt(valor);
    
    if(raiz*raiz == valor){
    
    printf("\n%d é um quadrado perfeito", valor);
    
}else printf("\n%d não é um quandrado perfeito", valor);

    return 0;
}
