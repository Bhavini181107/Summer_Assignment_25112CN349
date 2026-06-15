//Write a function to find factorial.
#include<stdio.h>

long int factorial(int n)
{
    int i;
    long int fact = 1;

    for(i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %ld", factorial(n));

    return 0;
}