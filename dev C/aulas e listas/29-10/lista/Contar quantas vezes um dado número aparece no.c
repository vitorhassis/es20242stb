/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num[5];
    int numBusca;
    int cont=0;
    
    for (int i=0; i<5; i++) {
        printf("digite o %d valor: ",i+1);
        scanf("%d",&num[i]);
    }
    
    printf("digite um valor para a busca no vetor: ");
    scanf("%d",&numBusca);
    
    for (int i=0; i<5; i++) {
        if(numBusca==num[i]) {
            cont++;
        }
    }
    
    printf("o numero informado aparece %d vezes no vetor",cont);

    return 0;
}