#include <stdio.h>

int main(void) {
    double kilometros;
    int minutos;
    int segundos;

    int tiempoEnSegundos;
    double segundosPorKilometro;
    int ritmoTotalEnSegundos;
    int ritmoEnMinutos;
    int segundosRestantes;

    printf("Kilometros recorridos: ");
    scanf("%lf", &kilometros);

    if (kilometros <= 0) {
        printf("La distancia debe ser mayor que cero.\n");
        return 1;
    }

    printf("Minutos totales: ");
    scanf("%d", &minutos);

    if (minutos < 0) {
        printf("Introduce un numero de minutos valido.\n");
        return 1;
    }

    printf("Segundos totales: ");
    scanf("%d", &segundos);

    if (segundos < 0) {
        printf("Introduce un numero de segundos valido.\n");
        return 1;
    }

    /* Pasamos todo el tiempo a segundos */
    tiempoEnSegundos = minutos * 60;
    tiempoEnSegundos = tiempoEnSegundos + segundos;

    /* Calculamos los segundos que tarda por kilometro */
    segundosPorKilometro = tiempoEnSegundos / kilometros;

    /* Redondeamos al segundo más cercano */
    ritmoTotalEnSegundos = segundosPorKilometro + 0.5;

    /* Separamos el ritmo en minutos y segundos */
    ritmoEnMinutos = ritmoTotalEnSegundos / 60;
    segundosRestantes = ritmoTotalEnSegundos % 60;

    printf("Ritmo: %d:%02d min/km\n",
           ritmoEnMinutos, segundosRestantes);

    return 0;
}
