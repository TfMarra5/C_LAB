#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 2;
    int Division = a / b;
    int Remaining = a % b;

    printf("a/b is: %d\n", Division);
    printf("Remainder of a / b: %d\n", Remaining);

    double division_decimal = (double)a / b;
    printf("a / b as double: %.2f\n", division_decimal);
    /* TODO: implemente o desafio descrito no README.md desta pasta. */
    return 0;
}
