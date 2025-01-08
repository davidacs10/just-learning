#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

float celsiusToFahr(float celsius)
{
    return (celsius * 1.8) + 32;
}

int main()
{

    int celsius;
    printf("Celsius to Fahrenheit table:\n");
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
    {
        float fahr = celsiusToFahr(celsius);
        printf("Celsius = %2d     |      Fahrenheit = %.1f\n", celsius, fahr);
    }

    return 0;
}
