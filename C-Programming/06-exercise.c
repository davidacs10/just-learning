#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, nl, nt, nb;
    nl = 0;
    nt = 0;
    nb = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
    printf("Count of blanks: %d\tCount of tabs: %d\tCount of newlines: %d\n", nb, nt, nl);
    return 0;
}
