#include <stdio.h>

int main()
{
    int c, i, nwhite, nother, ndigits, ncomma, ndot;

    nwhite = ndigits = nother = ncomma = ndot = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else if (c >= '0' && c <= '9')
            ++ndigits;
        else if (c == ',')
            ++ncomma;
        else if (c == '.')
            ++ndot;
        else
            ++nother;
    }

    printf("Espacios en blanco: %d, otros caracteres: %d\n", nwhite, nother);
    printf("Numero de digitos: %d\n", ndigits);
    printf("Numero de comas: %d\tNumero de puntos: %d\n", ncomma, ndot);

    return 0;
}
