#include <stdio.h>
#include <string.h>

int main() {
    char entrada[1000];
    char salida[1000];
    int k;

    printf("Entrada: ");
    fgets(entrada, sizeof(entrada), stdin);

    int longitud = strlen(entrada);

    if (longitud > 0 && entrada[longitud - 1] == '\n') {
        entrada[longitud - 1] = '\0';
        longitud--;
    }

    printf("Clave k: ");
    scanf("%d", &k);

    for (int i = 0; i < longitud; i++) {
        char letra = entrada[i];

        if (letra >= 'a' && letra <= 'z') {
            salida[i] = (letra - 'a' + k % 26 + 26) % 26 + 'A';
        } else if (letra >= 'A' && letra <= 'Z') {
            salida[i] = (letra - 'A' + k % 26 + 26) % 26 + 'A';
        } else {
            salida[i] = letra;
        }
    }

    salida[longitud] = '\0';

    printf("Salida: %s\n", salida);

    return 0;
}
