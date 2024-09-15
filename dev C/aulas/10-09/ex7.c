#include <stdio.h>
#include <string.h>

int main() {
int pont;
float sal;

printf("digite o seu salario: ");
scanf("%f",&sal);
printf("5 pontos = nivel A de premiacao\n10 pontos = nivel B de premiacao\n15pontos = nivel C de premiacao\n");
printf("nivel A) 10 por cento de bonus no salario\nnivel B) 15 por cento de bonus no salario\nC) 20 por cento de bonus no salario\n");
printf("digite a sua pontuacao: ");
scanf("%d",&pont);

if (pont>=5 && pont<10) {
	printf("bonus de 10 por cento. salario final:%.2f",sal*1.1);	
} else if (pont>=10 && pont<15) {
	printf("bonus de 15 por cento. salario final:%.2f",sal*1.15);
} else if (pont>=15) {
	printf("bonus de 20 por cento. salario final:%.2f",sal*1.2);
}







    return 0;
}
