/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
 float valor;
 
 printf("digite o valor da compra: ");
 scanf("%f",&valor);
 
 if (valor<100) {
     printf("nao tem desconto");
 } else if (valor>=100 && valor<=500) {
     printf("com 10 por cento desconto fica %.2f",valor*0.9);
 } else if (valor>500) {
     printf("com 20 por cento de desconto fica %.2f", valor*0.8);
 }

    return 0;
}
