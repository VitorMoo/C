#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    int contador = 1;

    // Imprimindo os primeiros N números naturais usando um loop while
    while (contador <= N) {
        printf("%d ", contador);
        contador++;
    }

    printf("\n");

    return 0;
}