// Convert Celsius to Fahrenheit
#include <stdio.h>

int main()
{
    float celsius, fa;
    printf("What's the temperature?: ");
    scanf("%f", &celsius);
    fa = (celsius * 1.8) + 32;
    printf("The temperature in Farenhite is %f", fa);
    return 0;
}