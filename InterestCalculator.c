#include <stdio.h>

int main()
{
    float I, P, T, R;
    printf("What,s your principle amout ?\t ");
    scanf("%f", &P);
    printf("What's the time ?\t");
    scanf("%f", &T);
    printf("Whats the Interest rate:\t");
    scanf("%f", &R);

    I = (P * T * R) / 100;
    printf("The total interest is: %f", I);
    return 0;
}