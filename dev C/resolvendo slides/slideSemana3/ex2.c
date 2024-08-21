//Crie um algoritmo que solicite o nome de um time de futebol ao usuário. Se o nome do time informado for "Flamengo", "Fluminense", "Vasco"ou "Botafogo", escreva "É um time carioca". Se o nome do time informado for "São Paulo", "Palmeiras", "Santos"ou "Corínthians", escreva "É um time paulista". Se o nome do time não for nenhum dos citados anteriormente, escreva "Time desconhecido".
//NAO CONSEGUI FAZER PORQUE == EM C COMPARA O ENDERECO DE MEMORIA, E NAO O CONTEUDO DA STRING

#include <stdio.h>


int main() {
		
	char time[40]; //aumenta o tamanho para armazenar o nome do time
	
	printf("Por favor, digite o seu time de futebol: ");
	scanf("%s", &time);	
	
	if (time == "flamengo") || (time == "fluminense") || (time == "vasco") || (time == "botafogo")) {
		printf("É um time carioca"); else if (time == "sao paulo") || (time == "palmeiras") || (time == "santos") || (time == "corinthians")) {
			printf("É um time paulista"); else printf("Time desconhecido!");
		}
	}
	
	return 0;
}
