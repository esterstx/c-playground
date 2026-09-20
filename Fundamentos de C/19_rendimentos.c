#include <stdio.h>

int main() {
    float deposito, taxa, rendimento, total;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Digite o valor da taxa de juros (%%): ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa / 100.0);
    total = deposito + rendimento;

    printf("Valor do rendimento: R$ %.2f\n", rendimento);
    printf("Valor total apos o rendimento: R$ %.2f\n", total);

    return 0;
}
