#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("Conceito: A\n");
    } else if (nota >= 8) {
        printf("Conceito: B\n");
    } else if (nota >= 7) {
        printf("Conceito: C\n");
    } else if (nota >= 6) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: F\n");
    }

    return 0;
}
