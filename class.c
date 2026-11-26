#include <stdio.h>

int main(void)
{
    double latitud;

    while (1)
    {
        printf("Ingresa la latitud: ");

        if (scanf("%lf", &latitud) == 1)
        {
        
            break;
            
        }

        printf("Eso no es un numero pendejo de mierda. Intenta de nuevo.\n");

        int caracter;
        while ((caracter = getchar()) != '\n' && caracter != EOF)
        {
        }
    }

    if (latitud > 0)
    {
        printf("Hemisferio norte.\n");
    }
    else if (latitud < 0)
    {
        printf("Hemisferio sur.\n");
    }
    else
    {
        printf("Ecuador.\n");
    }

    return 0;
}
