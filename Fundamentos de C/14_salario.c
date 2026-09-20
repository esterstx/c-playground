#include <stdio.h>

int main() {
    float valor_hora, perc_inss, salario_bruto, desconto, salario_liquido;
    int num_aulas;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valor_hora);
    printf("Digite o numero de aulas dadas no mes: ");
    scanf("%d", &num_aulas);
    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &perc_inss);

    salario_bruto = valor_hora * num_aulas;
    desconto = salario_bruto * (perc_inss / 100.0);
    salario_liquido = salario_bruto - desconto;

    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto do INSS: R$ %.2f\n", desconto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
