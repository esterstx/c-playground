#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero:\n ");
    scanf("%d", &numero);   

    if(numero >= 20 && numero <= 90)
    {
        if(numero % 2 == 0)
        {
            printf("O numero %d e par", numero);
        }
        else
        {
            printf("O numero %d e impar", numero);
        }
    }
    else
    {
        printf("O numero %d nao esta entre 20 e 90", numero);
    }
    return 0;
}