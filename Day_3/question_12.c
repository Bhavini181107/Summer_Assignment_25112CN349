//WAP to find LCM of two numbers.
#include<stdio.h>
int main ()
{
    int number1, number2, i, lcm, gcd = 1; 

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    for(i = 1; i <= number1 && i <= number2; i++)
    {
      if( number1 % i == 0 && number2 % i == 0)
      {
         gcd = i;
      }
    }

    lcm = (number1 * number2) / gcd ;

    printf("The LCM of the two entered numbers in %d", lcm);

    return 0;

}
