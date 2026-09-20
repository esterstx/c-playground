#include <stdio.h>

int main() {
    int placa, dezenas;

    printf("Digite a placa com 4 algarismos: ");
    scanf("%d", &placa);

    dezenas = (placa / 10) % 10;

    printf("Algarismo das dezenas: %d\n", dezenas);

    return 0;
}
