#include <stdio.h>

int main(void)
{
    long nc;
    nc = 0; // Siempre inicializar la variable.

    while (getchar() != EOF)
        ++nc;

    printf("%ld\n", nc);
    return 0;
}