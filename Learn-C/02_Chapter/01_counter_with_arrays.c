#include <stdio.h>

int main()
{
    int c, i, nwhite, nother;
    int ndigits[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigits[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigits[c - '0'];
        else if (c == '\n' || c == ' ' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    for (i = 0; i < 10; i++)
        printf("Caracter %i = %d\n", i, ndigits[i]);

    printf("Numero de espacios en blanco = %d\nNumeros de caracteres = %d", nwhite, nother);

    return 0;
}
