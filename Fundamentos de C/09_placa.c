#include <stdio.h>

int main() {
    int placa, unidades;

    printf("Digite a placa com 4 algarismos: ");
    scanf("%d", &placa);

    unidades = placa % 10;

    printf("Algarismo das unidades: %d\n", unidades);

    return 0;
}
