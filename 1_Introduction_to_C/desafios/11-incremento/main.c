#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = a++;
    printf("%d %d\n",a,b);

    a = 5;
    b = ++a;
    printf("%d %d\n",a,b);

    a += 3;
    a *= 2;

    printf("%d",a);
    return 0;
}
