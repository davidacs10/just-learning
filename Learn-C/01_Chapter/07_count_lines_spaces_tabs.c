#include <stdio.h>

int main()
{
    int c, nl, ns, nt;
    nl = ns = nt = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    printf("Count lines: %d\tCount tabs: %d\tCount spaces: %d\n", nl, nt, ns);
    return 0;
}
