#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fahr;
    printf("--------Fahrenheit-Celsius Table--------\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("\t%3d\t%6.1f\n", fahr, (fahr - 32) / 1.8);
    return 0;
}
