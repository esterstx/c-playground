#include <stdio.h>
#include <math.h>

int main() {
    float a1, q, an;
    int n;

    printf("Digite o primeiro termo (a1): ");
    scanf("%f", &a1);
    printf("Digite a razao (q): ");
    scanf("%f", &q);
    printf("Digite a posicao do termo desejado (n): ");
    scanf("%d", &n);

    an = a1 * pow(q, n - 1);

    printf("O termo a%d da P.G. eh: %.2f\n", n, an);

    return 0;
}