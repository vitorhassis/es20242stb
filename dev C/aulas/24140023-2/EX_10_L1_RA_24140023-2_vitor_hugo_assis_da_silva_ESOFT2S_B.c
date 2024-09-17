#include <stdio.h>

int main() {
float n1, n2, n3, n4, n5, medturma;
//usei a logica de como era na minha escola
printf("digite a nota dos 5 alunos (0 a 10): ");
scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);

medturma = (n1+n2+n3+n4+n5)/5;

if (medturma<5) {
	printf("turma reprovada");
} else if (medturma>=5 && medturma<7) {
	printf("turma em recuperacao");
} else if (medturma>=7) {
	printf("turma aprovada");
}

    return 0;
}





