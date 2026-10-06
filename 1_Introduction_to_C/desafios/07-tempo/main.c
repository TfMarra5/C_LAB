#include <stdio.h>

int main(void)
{
    int total_minutos = 135;
    int horas = 60;
    int horas_completas = total_minutos / horas;
    int minutos_restantes = total_minutos % horas;
    printf("%d h %d min\n", horas_completas, minutos_restantes);

    /* TODO: implemente o desafio descrito no README.md desta pasta. */
    return 0;
}
