#include <stdio.h>

float celsFah (float x);
float fahCels (float y);
//iniciar é uma array que pode armazenar ate 10 caracteres. Quando lemos iniciar, seu valor está armazenado na primeira posição da array, ou seja, a posicao zero. E por isso, usamos o [0] dentro do while e la no final. O programa nao rodava de jeito nenhum, tive
// que pedir ajuda sim ao gpt mas nao pra fazer o exercicio, mas pra me dizer o porque que nao dava certo. E no caso, é porque eu nao sabia desse lance da posicao da array. Eu nao tinha colocado o [0] dentro do while e nao dava certo.
//Outra coisa tambem, o espaco dentro do scanf serve pra ignorar quaisquer caracteres em branco que possam estar no buffer de entrada e atrapalhar o processo. Tambem nao sabia disso.
int main () {
	char iniciar [10]; 
	char opcao;
	float calcCF,tempC,tempF,calcFC;
	
	printf("Deseja iniciar a conversao?(S/N): ");
		scanf(" %c",&iniciar[0]);
	
	while (iniciar[0] == 'S' || iniciar[0] == 's') {
		printf("Conversor de temperaturas,escolha uma das opcoes:\nA) C -> F (Celsius para Fahrenheit)\nB)F -> C (Fahrenheit para Celsius)\n");
		scanf(" %c",&opcao);
		if (opcao=='A' || opcao=='a') {
			printf("Digite a temperatura em Celsius: ");
			scanf("%f",&tempC);
			calcCF = celsFah(tempC);
			printf("%.1f C -> %.1f F\n",tempC,calcCF);
		} else if (opcao=='B' || opcao=='b') {
			printf("Digite a temperatura em Fahrenheit: ");
			scanf("%f",&tempF);
			calcFC = fahCels(tempF);
			printf("%.1f F -> %.1f C\n",tempF,calcFC);
		}		
		
		printf("Deseja continuar? (S/N): ");
        scanf(" %c", &iniciar[0]);
	}
	
return 0;
}

float celsFah (float x) {
float calculo;
	calculo = (x*1.8)+32;
	return calculo;
	
}

float fahCels (float y) {
float calculo;
	calculo = (y-32)/1.8;
	return calculo;
}
