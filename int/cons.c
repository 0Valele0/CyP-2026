#include <stdio.h>

int main() {
    int consumo;
    int pago;

    printf("Ingresa los metros cubicos consumidos: ");
    scanf("%d", &consumo);

    if (consumo <= 10) {
        pago = consumo * 5;
    } else if (consumo <= 20) {
        pago = 10 * 5 + (consumo - 10) * 8;
    } else {
        pago = 10 * 5 + 10 * 8 + (consumo - 20) * 12;
    }

    printf("Pago: $%d\n", pago);

    return 0;
}