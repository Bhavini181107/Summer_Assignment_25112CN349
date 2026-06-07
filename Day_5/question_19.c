//WAP to print factors of a number.
#include<stdio.h>
int main ()
{
    int number, i ;

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("The factors of the entered number are:\n");

    for( i = 1; i <= number; i ++)
    {
        if( number % i == 0)
        {
            printf("%d  ", i);
        }
    }

    return 0;
}