#include <stdio.h>

int main(void)
{
    int x, y;
    char operacao;
    int resultado;

    printf("Digite dois inteiros e uma operacao (+, -, * ou %%): ");

    if (scanf("%d %d %c", &x, &y, &operacao) != 3) {
        printf("Entrada invalida\n");
        return 1;
    }

    switch (operacao) {
        case '+':
            resultado = x + y;
            break;

        case '-':
            resultado = x - y;
            break;

        case '*':
            resultado = x * y;
            break;

        case '%':
            if (y == 0) {
                printf("Nao e possivel dividir por zero\n");
                return 1;
            }
            resultado = x % y;
            break;

        default:
            printf("Operacao invalida\n");
            return 1;
    }

    printf("Resultado: %d\n", resultado);
    return 0;
}
