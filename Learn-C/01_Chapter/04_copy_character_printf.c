#include <stdio.h>

int main(void)
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        printf("%c", c);
        c = getchar();
    }

    return 0;
}