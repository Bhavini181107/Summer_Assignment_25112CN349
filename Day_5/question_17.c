//WAP to check a perfect number.
#include<stdio.h>
int main ()
{
    int number, i , originalnumber, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &number);

    originalnumber = number;

    if( number <= 0)
    {
        printf("Entered number is not a prime number: ");
    }
    
    for( i = 1; i <= number; i ++)
    {
        if( number % i == 0)
        {
            sum = sum + i;
        }
    }

    if( sum == originalnumber)
    {
        printf("Entered number is a perfect number.");
    }
    else
    {
        printf("Entered number is not a perfect number. ");
    }
    
   return 0;
}