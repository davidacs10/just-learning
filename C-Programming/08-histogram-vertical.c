#include <stdio.h>

#define IN 1
#define OUT 0
#define WORD_MAX_LENGTH 999

int main()
{
    int state; // para indicar el estado
    int length, maxLength, maxCount;
    int count[WORD_MAX_LENGTH]; // Array count para alamacenar los datos recolectados.
    int c, i, j;                // Variables de bucles y caracteres.

    state = OUT; // se inicia el state en out porque no esta en una palabra.
    length = maxLength = maxCount = 0;

    for (i = 0; i < WORD_MAX_LENGTH; ++i) // el bucle llenara nuestro array de CEROS
    {
        count[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if (length > maxLength)
                maxLength = length;
            if (length != 0)
                count[length]++;
            if (count[length] > maxCount)
                maxCount = count[length];

            length = 0;
        }
        else if (state == OUT)
        {
            state = IN;
            length++;
        }
        else
        {
            length++;
        }
    }
    for (i = maxCount; i > 0; --i)
    {
        printf("%2d: ", i);
        for (j = 1; j < maxLength + 1; ++j)
        {
            printf("  ");
            if (count[j] >= i)
            {
                putchar('#');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    printf("   ");
    for (i = 1; i < maxLength + 1; ++i)
        printf("%3d", i);
    printf("\n");

    return 0;
}
