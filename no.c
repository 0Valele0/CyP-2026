#include <stdio.h>

int main() {
    float t, m, g = 9.8;
    float altura, energiaCinetica;
printf("Introduce el tiempo de caída (s): ");
    scanf("%f", &t);
printf("Introduce la masa de la piedra (kg): ");
    scanf("%f", &m);
    altura = 0.5 * g * (t * t);
    energiaCinetica = m * g * altura;
    printf("Resultados\n");
    printf("Altura de caida : %.1f metros\n", altura);
    printf("Energía cinética al llegar: %.1f Julios\n", energiaCinetica);

    return 0;
}
