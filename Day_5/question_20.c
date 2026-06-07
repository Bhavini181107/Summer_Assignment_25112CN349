//WAP to find largest prime factor of a number.
#include<stdio.h>
int main ()
{
    int number, i, maxPrimeFactor = -1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if( number <= 1)
    {
        printf("Entered input is invalid for finding out prime factors.");
        return 0;
    }

    while( number % 2 == 0)
    {
        maxPrimeFactor = 2;
        number = number / 2;
    }

    for( i = 3; i*i <= number; i = i + 2)
    {
        while( number % i == 0)
        {
            maxPrimeFactor = i;
            number = number / i;
        }
    }
    if( number > 2)
    {
        maxPrimeFactor = number;
    }

    printf("The largest prime factor of the entered number is %d", maxPrimeFactor);

    return 0;

}