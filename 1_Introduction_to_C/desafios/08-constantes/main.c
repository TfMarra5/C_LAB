#include <stdio.h>

int main(void)
{
    const double fator = 9.0 / 5.0;
    const double deslocamento = 32.0;

    double celsius = 0;
    double fahrenheit = celsius * fator + deslocamento;

    printf("%.2f degrees in C = %.2f degrees in F\n", celsius, fahrenheit);
    /* TODO: implemente o desafio descrito no README.md desta pasta. */
    return 0;
}
