#include <stdio.h>

int main() {
    float tiempos[6];
    float suma = 0;
    float promedio;
    int vueltaRapida = 0;
    int primera = 1;

    for (int i = 0; i < 6; i++) {
        printf("Tiempo de la vuelta %d en segundos: ", i + 1);
        scanf("%f", &tiempos[i]);
        suma += tiempos[i];
    }

    for (int i = 1; i < 6; i++) {
        if (tiempos[i] < tiempos[vueltaRapida]) {
            vueltaRapida = i;
        }
    }

    promedio = suma / 6;

    printf("\nLas vueltas mas rapidas fueron: ");

    for (int i = 0; i < 6; i++) {
        if (tiempos[i] == tiempos[vueltaRapida]) {
            if (!primera) {
                printf(", ");
            }

            printf("%d", i + 1);
            primera = 0;
        }
    }

    printf(", con %.1f segundos.\n", tiempos[vueltaRapida]);
    printf("El tiempo promedio fue %.1f segundos.\n", promedio);

    return 0;
}
