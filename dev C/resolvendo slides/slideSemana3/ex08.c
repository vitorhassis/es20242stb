#include <stdio.h>
//o cabeçalho da funcao sempre em cima do main, O QUE ELA FAZ fica ABAIXO do main
//fiz solo e deu certo slc
int divpor4(int x);

int main() {
  int num1;
  printf("Por favor, digite um numero:\n");
  scanf("%d", &num1);
  //aprendi a mudar a logica pra economizar linha, mas tinha feito daquele jeito la embaixo
  if (num1 < 99 ||num1 >1000) {  
    printf("Atente-se ao limite estabelecido!");
    return 1;
  }

  if (divpor4(num1)) printf("o numero eh divisivel por 4");
  else printf("o numero nao eh divisivel por 4");
  return 0;
}

int divpor4(int x) {
  if (x % 4 == 0) return 1;
  else return 0;
}

/*int main() {
  int num1;
  printf("Por favor, digite um numero:\n");
  scanf("%d", &num1);
  if (num1 > 99 && num1 < 1000) {
    if (divpor4(num1)) {
      printf("o numero eh divisivel por 4");
    } else printf("o numero nao eh divisivel por 4");
  } else printf("Atente-se ao limite estabelecido!");
  return 0;
}

int divpor4(int x) {
  if (x % 4 == 0) {
    return 1;
  } else return 0;
}
*/
