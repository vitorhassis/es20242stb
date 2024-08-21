#include <stdio.h>
//Faça um código que receba dois números (dividendo e divisor), em seguida mostre o resultado. (Não guardar o resultado na memória).



int main () {
	
int n1,n2;
	
	printf("Por favor, digite dois valores numericos que serao referentes ao dividendo e divisor, respectivamente. \n");	
	scanf("%d %d",&n1,&n2);
	
	if (n2 == 0) {
		printf("Nao eh possivel realizar uma divisao, onde o divisor possui valor zero. Tente novamente com outro valor. \n");
	} else printf("O valor da divisao eh: %d",n1/n2); 
	
	//como o else cabe na linha, eh pequeno, eu nem preciso abrir e colocar o conteudo dentro entre chaves;
	 
	
//poderia ter feito diferente esse if e else envolvendo outras maneiras de montar esse parametro condicional

	
/*printf("Por favor, digite dois valores numericos que serao referentes ao dividendo e divisor, respectivamente. \n");	
	scanf("%d %d",&n1,&n2);
	printf("O valor da divisao eh: %d", n1/n2);	
	
	SE FIZESSE ASSIM, NAO ESTARIAM0S LEMBRANDO QUE O DIVISOR NUNCA PODE SER ZERO NUMA DIVISAO, ENT TEMOS QUE FAZER DIFERENTE*/
	
	return 0;
}
