#include <stdio.h>

int main() {
    int horas, minutos, total_minutos;

    printf("Digite o valor da hora (apenas as horas): ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    total_minutos = (horas * 60) + minutos;

    printf("Total de minutos decorridos: %d minutos\n", total_minutos);

    return 0;
}
