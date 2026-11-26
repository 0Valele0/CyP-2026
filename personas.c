#include <stdio.h>

int main(void)
{
    int personas;
    double harina;

    printf("ingrese la harina que deseas preparar ");
    scanf("%d", &personas);

    harina = personas * 250.0 / 4.0;

    if (harina > 1000)
    {
        printf("usa sdos tazones.\n");
    }

    if (harina <= 1000)
    {
        printf("Necesitas %.2f gramos de harina.\n", harina);
    }

    return 0;
}
