#include <stdio.h>

int main ()
{
    int numero, hs, min, seg;
    printf("Digite um numero:\n ");
       scanf("%d", &numero);

        hs = numero/3600;
        numero = numero % 3600;
        min = numero / 60;
        seg = numero % 60;
    printf("%dh %dm %ds",hs, min, seg);

        return 0;
}