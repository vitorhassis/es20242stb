/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
int num[15];
int i = 0;
int numSubs;

    for (int i=0; i<15;i++) {
        printf("Digite o %d num ",i+1);
        scanf("%d",&num[i]); //& pra acessar valores especificos em um array
    }
    
    do {
        printf("digite um numero que vai substituir(maior q 15) ");
        scanf("%d",&numSubs);
    } while (numSubs<15);
    
    num[14] = numSubs;
    
    
    for (int i=0; i<15;i++) {
        printf("\n%d",num[i]);
    } 


    return 0;
}