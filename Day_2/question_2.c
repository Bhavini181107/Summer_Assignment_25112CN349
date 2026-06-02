//WAP to reverse a number
#include<stdio.h>
int main()
{
    int reverse = 0, number,d;

    printf("Enter a number:");
    scanf("%d", &number);

    while( number != 0)
    {
        d = number % 10;
        reverse = reverse * 10 + d;
        number = number / 10;
    }

    printf("The reverse of the entered number is %d", reverse);

    return 0;
}