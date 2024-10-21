#include <stdio.h>

int main () {
	
	int num_alunos;
	float valor_alturas,med_alturas;
	
	med_alturas = 0; //msm logica. qnd uma variavel recebe ela mesma, voce inicializa ela com 0;
	
	printf("Digite o numero de alunos que terao suas alturas coletadas: ");
	scanf("%d",&num_alunos);
	
	
	for (int i = 1; i <=num_alunos; i++) {
		printf("Digite a altura do aluno %d(em metros, ex: 1.8): ",i); //tem como fazer esse lance, porq se vc pensar faz sentido, ja que i vai ficar variando. Mas, dai vc coloca pra inicializar com 1, para n ficar "digite a altura do aluno 0"
		scanf("%f",&valor_alturas);
		med_alturas+=valor_alturas;	
	}
	
	med_alturas/=num_alunos;
	
	printf("A media das alturas e de: %.2fcm",med_alturas);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
