#include <stdio.h> 
//NAO CONSEGUI FAZER O 9.
int main () {
	
int numAlunos;
float nota01,nota02,med01,med02;

//Quando uma variavel recebe ela mesma, voce precisa inicializar ela

med01 = 0;
med02 = 0;

	
	printf("Digite o numero de alunos: ");
	scanf("%d",&numAlunos);
	
	for (int i = 0; i<numAlunos; i++) {
		printf("Digite a nota da disciplina A: ");
		scanf("%f",&nota01);
		printf("Digite a nota da disciplina B: ");
		scanf("%f",&nota02);
		printf("--------------------------------\n");
		
		//aq é para independente do numero de alunos, a nota sempre ficar iterando/juntando na disciplina 01 e 02, pra depois calcular a media
		med01+=nota01; 
		med02+=nota02;
	}
	
	//med01 = med01/numAlunos; qnd uma variavel recebe ela mesma mais alguma coisa (alguma operação), coloca em vez de x = x + a para x+=a
	//med02 = med02/numAlunos;
	
	med01/=numAlunos;
	med02/=numAlunos;
	
	printf("De acordo com os dados coletados, temos:\nA) Media disciplina A %.2f pontos\nB) Media disciplina B = %.2f pontos",med01,med02);	
	
	return 0;
}
