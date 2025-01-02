#include <stdio.h>

int main()
{
    float fahr;
    int lower, upper, step, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Table of conversion celsius to fahrenheit:\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 1.8) + 32.0;
        printf("%d\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}