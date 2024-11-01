/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int num[5];
int maior,menor;

    for (int i=0; i<5; i++) {
        printf("digite o %d valor: ",i+1);
        scanf("%d",&num[i]);
    }
    
    maior = num[0];
    menor = num[0];
    
    for (int x=0; x<5;x++) {
        if (num[x]>maior) {
            maior = num[x];
        }
        
        if (num[x]<menor) {
            menor = num[x];
        }
    }
    
   
    
    printf("o maior elemento do vetor e: %d\no menor elemento do vetor e: %d",maior,menor);
    

    return 0;
}