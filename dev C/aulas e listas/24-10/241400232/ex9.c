#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "biblioteca";
    char *resultado;

    resultado = strstr(str, "lib");

    if (resultado) {
        printf("primeira ocorrencia de 'lib' é: %s", resultado);
    } else {
        printf("substring 'lib' nao foi encontrada em -> %s", str);
    }

    return 0;
}
