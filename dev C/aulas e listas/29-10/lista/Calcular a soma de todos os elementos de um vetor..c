/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int num[10];
int soma=0;

    for (int i=0; i<10; i++) {
        printf("digite o %d numero ",i+1);
        scanf("%d",&num[i]);
        soma+=num[i];
    }
    
    printf("soma =  %d",soma);


    return 0;
}