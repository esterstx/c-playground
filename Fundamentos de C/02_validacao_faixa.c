#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

        if (numero >= 1 && numero <= 9 )
        {
           printf("O valor esta na faixa permitida\n");
        }
        else
        {
           printf("O valor esta fora da faixa permitida\n");
        }
        return 0;
}