#include <stdio.h>

int main()
{
    int fahr;
    printf("--------Fahrenheit-Celsius Table--------\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("\t%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

    return 0;
}
