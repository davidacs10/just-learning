#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (state)
        {
            if (isspace(c))
            {
                state = OUT;
                putchar('\n');
            }
            else
            {
                putchar(c);
            }
        }
        else
        {
            if (!isspace(c))
            {
                state = IN;
                putchar(c);
            }
        }
    }

    return 0;
}
