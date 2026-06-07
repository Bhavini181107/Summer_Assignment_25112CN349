//WAP to check whether the number is armstrong.
#include<stdio.h>
#include<math.h>
int main () 
{
    int number, c = 0, n, r, originalnumber, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalnumber = number;
    n = number;

    while( number != 0)
    {
        number = number / 10;
        c = c + 1;
    }

    while( n != 0)
    {
        r = n % 10;
        sum = sum + round(pow(r , c));
        n = n / 10;

    }

    if( sum == originalnumber)
    {
        printf("Entered number is an armstrong number: ");
    }
    else
    {
        printf("Entered number is not an armstrong number: ");
    }
    
    return 0;
}