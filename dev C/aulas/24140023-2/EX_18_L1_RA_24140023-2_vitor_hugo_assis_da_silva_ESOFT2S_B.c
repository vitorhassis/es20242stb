#include <stdio.h>


int main () {
float inv,jurocdiario,juroc,ac;
juroc=0.00016667;

printf("digite o valor: ");
scanf("%f",&inv);
printf("o juro composto e de 0.5 por cento por mes\n");
jurocdiario=inv*0.00016667;
ac=jurocdiario*720;
printf("em um periodo de 2 anos, voce tera acumulado: R$%.2f",ac);

 return 0;	
}
