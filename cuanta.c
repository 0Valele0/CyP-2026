#include <stdio.h>

int main(void)
{
    int personas;
    float harinaNecesaria;
    float harinaDisponible;
    float personasAlcanza;

    printf("¿Para cuantas personas es la receta? ");
    scanf("%d", &personas);

    harinaNecesaria = personas * 250.0 / 4.0;

    if (harinaNecesaria > 1000)
    {
        printf("Aviso: necesitas mas de 1000 gramos de harina.\n");
    }

    if (harinaNecesaria <= 1000)
    {
        printf("Necesitas %.2f gramos de harina.\n", harinaNecesaria);
    }

    printf("¿Cuantos gramos de harina tienes? ");
    scanf("%lf", &harinaDisponible);

    personasAlcanza = harinaDisponible * 4.0 / 250.0;

    printf("Esa harina alcanza para %.f personas.\n", personasAlcanza);

    
    return 0;
}
