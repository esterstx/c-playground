#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero\n ");
    scanf("%d", &numero);

        if(numero > 0)
        {
            printf("Valor armazenado em A: %d\n", numero);
        }
        else
        {
            printf("Valor armazenado em B: %d\n", numero);
        }
        return 0;
}