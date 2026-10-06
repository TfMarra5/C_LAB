#include <stdio.h>

int main(void)
{
    unsigned int a = 5u;
    unsigned int b = 6u;

    printf("%u\n", a & b);
    printf("%u\n", a | b);
    printf("%u\n", a ^ b);
    printf("%u\n", a << 1);
    printf("%u\n", a >> 1);
    printf("%u\n", (~a)&255u);
    return 0;
}
