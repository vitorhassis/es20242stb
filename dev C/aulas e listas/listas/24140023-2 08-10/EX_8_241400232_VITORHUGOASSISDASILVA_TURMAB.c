#include <stdio.h>

int main() {
    int num, x;
    x = 1; 
    
    printf("Digite um numero (maior que zero) qualquer: ");
    scanf("%d", &num);
    
    if (num < 1) {
        printf("NUMERO MENOR QUE ZERO. TENTE NOVAMENTE\n");
    } else {
    	/*basicamente, vc faz uma verificacao, onde ele vai dividindo o numero escolhido varias vezes,vendo se em alguma dessas divisoes o resultado é zero (divisivel por aquele numero). Se ele for divisivel por algum dos numeros, a variavel x vai ser 0, ou seja, 
		nao é primo. Se nao for divisivel, mostra que o numero em questao é sim primo (divisivel por 1 e por ele mesmo APENAS)*/
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                x = 0; 
            }
        }
    }
    
    if (x == 0) {
        printf("%d nao eh primo\n", num);
    } else {
        printf("%d eh primo\n", num);
    }
    
    return 0;
}

