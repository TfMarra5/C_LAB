#include <stdio.h>
#include <limits.h>

int main(void)
{
    /*Imprima sizeof de char, int, float, double e long double.*/
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(long double) = %zu\n", sizeof(long double));

    /*imprima CHAR_BIT, INT_MIN e INT_MAX. Anote os resultados em observacoes.md.*/
    printf("CHAR_BIT = %d\n", CHAR_BIT);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);

    /* TODO: implemente o desafio descrito no README.md desta pasta. */
    return 0;
}
