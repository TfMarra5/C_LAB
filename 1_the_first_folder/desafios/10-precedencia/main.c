#include <stdio.h>

int main(void)
{
    int x = 2 + 3 * 4;
    int y = (2 + 3) * 4;
    int z = 10 / 3 * 3;
    double a = 10.0 / 3 * 3;

    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);
    printf("A = %.2f\n", a);
    return 0;
}
