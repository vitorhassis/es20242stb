/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int i = 0;
int num[10];

    for (int i=0; i<10; i++) {
        printf("digite %d numero ",i+1);
        scanf("%d",&num[i]);
    }
    
    for (int i=0; i<10; i++) {
        printf("\n%d",num[i]);
    }
    
    printf("\n------");
    
     for (int i=9; i>=0; i--) {
        printf("\n%d",num[i]);
    }
    

    return 0;
}