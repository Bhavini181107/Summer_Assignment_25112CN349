//WAP to count set bits in a number.
#include<stdio.h>
int main ()
{
    int number, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    while ( temp > 0)
    {
        count += (temp & 1);
        temp >>= 1;
    }

    printf("Number of bit sets in %d is %d", number, count);

    return 0;

}