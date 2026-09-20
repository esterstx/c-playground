#include <stdio.h>

int main() {
    int numerador, denominador;
    float racional;

    printf("Digite o numerador: ");
    scanf("%d", &numerador);
    printf("Digite o denominador: ");
    scanf("%d", &denominador);

    if (denominador != 0) {
        racional = (float)numerador / denominador;
        printf("Numero racional correspondente: %.4f\n", racional);
    } else {
        printf("Erro: O denominador nao pode ser zero!\n");
    }

    return 0;
}
