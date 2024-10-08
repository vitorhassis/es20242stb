/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main () {
 char avaliacao;
 float sal;
 
 
 printf("digite o seu salario: ");
 scanf("%f",&sal);
 
 printf("informe sua avaliacao(A,B,C): ");
 scanf("%s",&avaliacao);
 
 if(avaliacao=='A') {
   printf("salario final: %.2f\n",sal*1.15);	
 } else if (avaliacao=='B') {
   printf("salario final: %.2f\n",sal*1.1);	
 } else if (avaliacao=='C') {
   printf("salario final: %.2f\n",sal*1.05);
 } else {
 	printf("use apena A B ou C na avaliacao");
 }
 
  return 0;
}
