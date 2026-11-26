#include <stdio.h>

int main() {
    float masaGramos, masaMolar, litros;
    float moles, molaridad;
 printf("Introduce la masa en gramos: ");
    scanf("%f", &masaGramos);

    printf("Introduce la masa molar: ");
    scanf("%f", &masaMolar);
printf("Introduce el volumen en litros: ");
    scanf("%f", &litros);
    moles = masaGramos / masaMolar;
    molaridad = moles / litros;
printf("Resultados\n");
printf("Masa molar ingresada: %.2f g/mol\n", masaMolar);
printf("Molaridad: %.2f M (mol/L)\n", molaridad);

    return 0;
}
