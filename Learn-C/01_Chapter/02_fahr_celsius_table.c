/* Comentarios multilinea
Es muy buena practica poner comentarios
en nuestro codigo para explicarle a otros
desarrolladores que hace*/

// Comentarios de una sola linea
// Capitulo 01: Variables, comentarios, expresiones e iteraciones

#include <stdio.h>

int main()
{
    int fahr, celsius; // Es buena practica ponerle nombres a las variables que vayan acorde lo que signifiquen
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}