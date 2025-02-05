#include <stdio.h>

#include <stdio.h>

int main()
{
    int c, pre;

    pre = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!pre)
            {
                putchar(c);
                pre = 1;
            }
        }
        else
        {
            putchar(c);
            pre = 0;
        }
    }
    return 0;
}