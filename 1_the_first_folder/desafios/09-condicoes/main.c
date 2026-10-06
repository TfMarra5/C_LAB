#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age = 18;
    bool isStudent = true;

    bool can_participate;
       can_participate = age >= 18 && isStudent;

    printf("Can participate: %d ", can_participate);
    return 0;
}
