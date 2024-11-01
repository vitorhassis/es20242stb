/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 char strings[10];
 int i;
 
 printf("digite uma string ");
     scanf("%s",strings);
 
 for (int i=0; i<10; i++) {
     printf("%c",strings[i]);
 }
 
 
 

    return 0;
}