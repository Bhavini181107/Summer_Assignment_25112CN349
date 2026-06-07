//WAP to check strong number.
#include<stdio.h>
int main ()
{
    int number, r, originalnumber, i , factorial , sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalnumber = number;

    if( number <= 0)
    {
        printf("Entered number is not a strong number.");
        return 0;
    }

    while( number != 0)
    {
        r = number % 10;
        factorial = 1;
        for ( i = 1; i <= r; i ++)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        number = number/ 10;
    }

    if( sum == originalnumber)
    {
        printf("Entered number is a strong number.");
    }
    else
    {
        printf("Entered number is not a strong number.");
    }

    return 0;
    
}