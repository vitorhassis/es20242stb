#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int val, num100, num50, num20, num10, num5, resto;

    printf("Informe o valor de retirada: ");
    scanf("%d", &val);

    num100 = val/100;
    resto = val%100;

    num50 = resto/50;
    resto = resto%50;

    num20 = resto/20;
    resto = resto%20;

    num10 = resto/10;
    resto = resto%10;

    num5 = resto/5;

    printf("Notas de R$100: %d\n", num100);
    printf("Notas de R$50: %d\n", num50); 
    printf("Notas de R$20: %d\n", num20); 
    printf("Notas de R$10: %d\n", num10); 
    printf("Notas de R$5: %d\n", num5);

    return 0;
}
