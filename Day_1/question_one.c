//WAP to calculate the sum of first N ntural number
#include<stdio.h>

int main()
{
    int i, natural_number, sum=0;

    printf("Enter a natural number: ");
    scanf("%d", &natural_number);

    for(i=1 ; i<= natural_number ; i++)
    {
        sum = sum + i;

    }

    printf("The sum of first N natural numbers for the entered number is: %d", sum);

    return 0;
}