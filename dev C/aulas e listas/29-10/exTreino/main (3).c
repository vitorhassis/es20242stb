/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
int qntVetor;
int i = 0;


    do {
        printf("Digite quantos elementos o vetor tera(>15) ");
    scanf("%d",&qntVetor);
    } while (qntVetor<15);
    

    int vetorNum[qntVetor];
    
    for (int i=0; i<15; i++) {
        printf("digite o %d valor ",i+1);
        scanf("%d",&vetorNum[i]);
    }
    
    vetorNum[14] = 997; //daria pra solicitar o numero que ele quer substituir na posicao 15, deria que pedir um valor, e esse valor seria = vetorNum[14];


    for (int i=0; i<15; i++) {
        printf("\nposicao %d = %d",i,vetorNum[i]);
    }

    return 0;
}