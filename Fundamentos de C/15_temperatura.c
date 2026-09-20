#include <stdio.h>

int main() {
    float c, f;

    printf("Digite a temperatura em graus Centigrados: ");
    scanf("%f", &c);

    f = (9.0 * c + 160.0) / 5.0;

    printf("Temperatura em Fahrenheit: %.2f F\n", f);

    return 0;
}
