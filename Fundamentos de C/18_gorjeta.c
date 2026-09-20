#include <stdio.h>

int main() {
    float despesa, gorjeta, total;

    printf("Digite o valor gasto no restaurante: ");
    scanf("%f", &despesa);

    gorjeta = despesa * 0.10;
    total = despesa + gorjeta;

    printf("Valor da gorjeta (10%%): R$ %.2f\n", gorjeta);
    printf("Valor total a pagar: R$ %.2f\n", total);

    return 0;
}
