//WAP to convert from binary to decimal.
#include<stdio.h>
int main ()
{
    int decimal = 0, rem, base = 1;
    long long binary, temp;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;
    while (temp > 0)
    {
        rem = temp % 10;
        decimal = decimal + rem + base;
        temp = temp / 10;
        base = base * 2;
    }

    printf("Decimal equivalent of %lld is %d.\n", binary, decimal);

    return 0;

}