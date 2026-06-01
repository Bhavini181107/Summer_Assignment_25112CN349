//WAP to find factorial of a number
#include<stdio.h>
int main()
{
    int factorial = 1, i, number;

    printf("Enter a number whose factorial is to found:");
    scanf("%d", &number);

    for(i=1; i<= number; i++)
    {
        factorial= factorial*i;  
    }

    printf("The factorial of entered number is: %d", factorial);

    return 0;
}