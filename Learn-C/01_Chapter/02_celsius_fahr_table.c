#include <stdio.h>

int main()
{
    int celsius, fahr;
    int lower, upper, step;

    lower = -10;
    upper = 50;
    step = 10;

    celsius = lower;
    printf("Celsius to Fahrenheit table\n");
    printf("----------------------------\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 9 / 5) + 32;
        printf("%3d\t%6d\n", celsius, fahr);
        celsius = celsius + 10;
    }

    return 0;
}
