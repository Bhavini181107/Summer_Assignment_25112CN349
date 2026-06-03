//WAP to find GCD of two numbers.
#include<stdio.h>
int main ()
{
    int number1, number2, i, gcd = 1;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    for( i = 1; i <= number1 && i <= number2; i ++)
    {
      if( number1 % i == 0 && number2 % i == 0)
       {
           gcd = i ;
       }
    }

    printf("The GCD of the two entered numbers is %d\n", gcd);

    return 0;
}