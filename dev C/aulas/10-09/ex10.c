#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, notaturma;

    // Entrada de notas
    printf("Digite a nota do aluno 1: ");
    scanf("%f", &n1);

    printf("Digite a nota do aluno 2: ");
    scanf("%f", &n2);

    printf("Digite a nota do aluno 3: ");
    scanf("%f", &n3);

    printf("Digite a nota do aluno 4: ");
    scanf("%f", &n4);

    printf("Digite a nota do aluno 5: ");
    scanf("%f", &n5);

    printf("Digite a nota do aluno 6: ");
    scanf("%f", &n6);

    printf("Digite a nota do aluno 7: ");
    scanf("%f", &n7);

    printf("Digite a nota do aluno 8: ");
    scanf("%f", &n8);

    printf("Digite a nota do aluno 9: ");
    scanf("%f", &n9);

    printf("Digite a nota do aluno 10: ");
    scanf("%f", &n10);

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10 || 
        n4 < 0 || n4 > 10 || n5 < 0 || n5 > 10 || n6 < 0 || n6 > 10 || 
        n7 < 0 || n7 > 10 || n8 < 0 || n8 > 10 || n9 < 0 || n9 > 10 || 
        n10 < 0 || n10 > 10) {
        printf("Nota apenas de 0 a 10. Tente novamente.\n");
    } else {
        notaturma = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;
        if (notaturma < 6) {
            printf("TURMA REPROVADA\n");
        } else if (notaturma >= 6 && notaturma < 7) {
            printf("TURMA EM RECUPERAÇÃO\n");
        } else {
            printf("TURMA APROVADA\n");
        }
    }

    return 0;
}





