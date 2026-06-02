//WAP to check whether the entered number is pallindrome.
#include<stdio.h>
int main()
{
    int number, reverse = 0, n, d;

    printf("Enter a number:");
    scanf("%d", &number);

    n = number;

    while ( number != 0)
    {
        d = number % 10;
        reverse = reverse * 10 + d;
        number = number / 10;
    }

    if ( n == reverse)
    {
        printf("The entered number is pallindrome.");
    }
    else
    {
        printf("The entered number is not pallindrome.");
    }

    return 0;

}