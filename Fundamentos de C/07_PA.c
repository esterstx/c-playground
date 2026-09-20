#include <stdio.h>

int main() {
    float a1, r, an;
    int n;

    printf("Digite o primeiro termo (a1): ");
    scanf("%f", &a1);
    printf("Digite a razao (r): ");
    scanf("%f", &r);
    printf("Digite a posicao do termo (n): ");
    scanf("%d", &n);

    an = a1 + (n - 1) * r;

    printf("O termo a%d da P.A. eh: %.2f\n", n, an);

    return 0;
}