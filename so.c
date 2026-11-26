#include <stdio.h>
#include <string.h>

int posicion(char letra) {
    return letra - 'A';
}

char letra(int numero) {
    return 'A' + numero;
}

int main() {
    char texto[1000];
    char cifrado[1000];
    int k;

    printf("Mensaje en mayusculas: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Clave: ");
    scanf("%d", &k);

    int longitud = strlen(texto);

    /* Quita el salto de línea que puede guardar fgets */
    if (longitud > 0 && texto[longitud - 1] == '\n') {
        texto[longitud - 1] = '\0';
        longitud--;
    }

    for (int i = 0; i < longitud; i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            int nueva_posicion = (posicion(texto[i]) + k) % 26;
            cifrado[i] = letra(nueva_posicion);
        } else {
            cifrado[i] = texto[i];
        }
    }

    cifrado[longitud] = '\0';

    printf("Mensaje cifrado: %s\n", cifrado);

    return 0;
}
