#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
    {
        printf("Expression of getchar() != EOF = %d\n", getchar() != EOF);
    }
    return 0;
}
