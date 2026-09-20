#include <stdio.h>

int main()
{
    char nome[50];
    char sexo;
    printf("Qual seu nome?\n");
    scanf("%49s", nome);

    printf("Sexo F ou M?\n");
    scanf(" %c", &sexo);

        if(sexo == 'F')
        {
            printf("Ilma Sra.\n%s\n", nome);
        }
        else
        {
            printf("Ilmo Sr.\n%s\n", nome);
        }
        return 0;
}