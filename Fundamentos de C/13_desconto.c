#include <stdio.h>

int main() {
    float valor, desconto, novo_valor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    desconto = valor * 0.09;
    novo_valor = valor - desconto;

    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Novo valor com desconto: R$ %.2f\n", novo_valor);

    return 0;
}
