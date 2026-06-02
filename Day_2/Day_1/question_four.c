//WAP to count digits in a number
#include<stdio.h>
int main()
{
    int c=0, number, i;

    printf("Enter a number:");
    scanf("%d", &number);

    while(number != 0)
    {
        number= number/10;

        c = c+1;
    }

    printf("The number of digits in entered number is: %d", c);

    return 0;
    
}