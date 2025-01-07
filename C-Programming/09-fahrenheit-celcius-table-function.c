#include <stdio.h>

float fahrToCelsius(float fahr);

int main()
{
    float fahr;
    int upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;

    printf("Fahrenheit-Celsius table\n");
    while (fahr <= upper)
    {
        printf("%2.0f <---> %6.1f\n", fahr, fahrToCelsius(fahr));
        fahr = fahr + step;
    }
    return 0;
}
float fahrToCelsius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
