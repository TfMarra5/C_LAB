#include <stdio.h>

int main(void)
{
    int a;
printf("Digite um numero inteiro: ");

    if (scanf ("%d", &a) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }

    if (a % 2 == 0) {
        printf("It is even\n");
    }
    else {
        printf("It is odd\n");
    }
    return 0;
}
