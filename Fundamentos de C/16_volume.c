#include <stdio.h>

int main() {
    float r, h, v;

    printf("Digite o raio da lata: ");
    scanf("%f", &r);
    printf("Digite a altura da lata: ");
    scanf("%f", &h);

    v = 3.14159 * r * r * h;

    printf("Volume da lata: %.2f\n", v);

    return 0;
}
