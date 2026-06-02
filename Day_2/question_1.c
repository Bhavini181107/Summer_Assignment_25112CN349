//WAP to find the sum of digits of a number
#include<stdio.h>
int main ()
{
    int number, r, sum = 0;

    printf("Enter a number:");
    scanf("%d", &number);

    while(number != 0)
    {
        r = number % 10;
        sum = sum + r;
        number = number / 10;
    }

    printf("The sum of the digits of the entered number are %d", sum);

    return 0;

}