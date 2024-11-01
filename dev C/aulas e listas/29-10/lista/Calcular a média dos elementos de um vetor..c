/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num[5];
   float media;
   
   for (int i=0; i<5; i++) {
       printf("digite o %d numero ",i+1);
       scanf("%d",&num[i]);
       media+=num[i];
   }
   
   printf("a media e: %.2f",media/5);

    return 0;
}