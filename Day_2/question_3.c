//WAP to products of a digit
#include<stdio.h>
int main()
{
    int product = 1, number, d;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        d = number % 10;
        product = product * d;
        number = number / 10;
    }

    printf("The product of digits of the entered number is %d", product);

    return 0;
}