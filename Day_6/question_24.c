//WAP to find x raise to the power n without pow ().
#include<stdio.h>
int main ()
{
    int exp, absExp, i;
    double base, result = 1.0;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter the exponent (integer): ");
    scanf("%d", &exp);

    absExp = exp < 0 ? -exp : exp;

    for (i = 0; i < absExp; i++)
    {
        result = result * base;
    }

    if (exp < 0)
    {
        result = 1.0 / result;
    }

    printf("Result: %.6f\n", result);

    return 0;
}