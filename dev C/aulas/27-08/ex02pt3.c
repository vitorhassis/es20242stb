#include <stdio.h>
//agora vamos criar uma funcao que diga o menor valor da sequencia de 6 digitos pedido ao usuario;

int smallernum (int n1, int n2, int n3, int n4, int n5, int n6);

int main () {
int menor,n1,n2,n3,n4,n5,n6;

printf("Digite seis numeros:\n");
scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

menor = smallernum(n1,n2,n3,n4,n5,n6);

printf("O menor numero da sequencia e: %d", menor);
return 0;
	
}

int smallernum (int n1, int n2, int n3, int n4, int n5, int n6) {
int menor = n1; //aq q vc coloca q n1 vai ser o menor, até porque, quando o usuario colocar o primeiro valor, ele é o unico ent ele é o menor naquele momento. Com ele, voce vai fazendo as demais verificações condicionais;
if (n2<menor) {
	menor = n2;
} 
else if (n3<menor) {
	menor = n3;
}
else if (n4<menor) {
	menor = n4;
}
else if (n5<menor) {
	menor = n5;
}
else if (n6<menor) {
	menor = n6;
}
return menor;
} 
