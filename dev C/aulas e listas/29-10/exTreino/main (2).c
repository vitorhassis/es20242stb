/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
float num[5];
int i = 0;

    for (int i=0; i<5;i++) {
        printf("Digite um num ");
        scanf("%f",&num[i]); //& pra acessar valores especificos em um array
    }
    
    printf("terceiro num: %f",num[2]);


    return 0;
}