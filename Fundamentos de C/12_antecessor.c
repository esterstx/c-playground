#include <stdio.h>

int main() {
    int num, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
