#include<stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    // Calculando a soma dos primeiros N números inteiros usando um loop for
    for (int i = 1; i <= N; ++i) {
        soma += i;
    }

    printf("A soma dos primeiros %d numeros inteiros : %d\n", N, soma);

    return 0;
}