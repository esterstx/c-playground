#include <stdio.h>

int main()
{
    int numero;
    int P = 0;
    int I = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        P = numero;
    }
    else
    {
        I = numero;
    }

    printf("P: %d\n", P);
    printf("I: %d\n", I);

    return 0;
}