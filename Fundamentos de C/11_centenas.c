#include <stdio.h>

int main() {
    int placa, centenas;

    printf("Digite a placa com 4 algarismos: ");
    scanf("%d", &placa);

    centenas = (placa / 100) % 10;

    printf("Algarismo das centenas: %d\n", centenas);

    return 0;
}
