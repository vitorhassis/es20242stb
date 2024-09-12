/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int l1,l2,l3;

printf("digite 3 valores para os lados: ");
scanf("%d%d%d",&l1,&l2,&l3);

if (l1==l2 && l2==l3) {
    printf("triangulo equilatero");
} else if (l1!=l2 && l2!=l3) {
    printf("triangulo escaleno");
} else if (l1==l2 & l2!=l3) {
    printf("triangulo isosceles");
}





    return 0;
}