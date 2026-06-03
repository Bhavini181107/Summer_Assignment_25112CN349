//WAP to check whether a number is prime.
#include<stdio.h>
int main()
{
    int number, c = 0, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i=1 ; i <= number; i ++)
    {
        if(number % i == 0)
        {
            c = c + 1;
        }
    }

    if ( c == 2)
    {
        printf("The entered number is a prime number.");
    }

    else 
    {
        printf("The entered number is not a prime number.");
    }

    return 0;
}