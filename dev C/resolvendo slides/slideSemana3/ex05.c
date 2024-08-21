//Escreva um algoritmo que leia um número inteiro positivo com quatro dígitos e escreva como saída “sim” se a soma dos dígitos da unidade e da centena são múltiplos de 4 e “não” caso contrário.


#include <stdio.h>
//se voce quer tirar a parte a unidade de milhar=(num/1000)%10; a centena=(num/100)%10; dezena=(num/10)%10; unidade=num%10. Se ficar confuso, so fazer no papel e ver que faz sentido e funciona

 //dentro do (), eh o parametro da funcao, vc n define o parametro da funcao como uma variavel;
int calc_cent_unid(int valor){
int cent,unid,soma;
	if(valor>999 && valor<10000) {
	cent=valor/100;
	cent=cent%10;
	unid=valor/10;
	unid=unid%10;
	soma=cent+unid;
	if (soma%4==0){
	return 1;
	} else 
	return 0;
	} else printf("O valor nao condiz com o limite estabelecido");
}

int main (){
int num;
	printf("Por favor, digite um valor com 4 digitos: ");
	scanf("%d",&num);
	if(calc_cent_unid(num)){
	printf("sim");
	} else 
	printf("nao");	
	return 0;
}
