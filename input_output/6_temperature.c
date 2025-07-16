#include <stdio.h>

int main()
{
    float cel, fahr;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);
    fahr = (cel * 9.0 / 5.0) + 32;
    printf("Temperature in Fahrenheit: %.2f F\n", fahr);

    return 0;
}