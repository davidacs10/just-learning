#include <stdio.h>

int main()
{
    int fahr;
    printf("Fahr to celsius table reverse\n");
    printf("-----------------------------\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));

    return 0;
}
