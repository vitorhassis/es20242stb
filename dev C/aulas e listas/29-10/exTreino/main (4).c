/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int qntNum;    
int i = 0;
int numero;
float media;

media = 0;



    printf("digite quantos elementos o vetor tera ");
    scanf("%d",&qntNum);
    
    int vetorNum[qntNum];
    
    for (int i = 0; i<qntNum; i++) {
        printf("digite o %d numero: ",i+1);
        scanf("%d",&numero);
        media+=numero;
    }
    
    printf("media = %.2f",media/qntNum);

    return 0;
}