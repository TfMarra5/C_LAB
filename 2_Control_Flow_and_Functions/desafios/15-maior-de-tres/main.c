#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int z;

    printf("Type three numbers: ");
    if (scanf( "%d %d %d", &x, &y, &z) != 3) {
        printf("Invalid input");
        return 1;
    }
    int maior = x;
    if (y>maior)
        maior = y;
    if (z>maior)
        maior = z;

    printf("The biggest number is: %d\n", maior);
    return 0;
}
