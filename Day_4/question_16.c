//WAP to print armstrong number in a range.
#include<stdio.h>
#include<math.h>
int main ()
{
    int start, end, i, originalnumber, number, r, n, c = 0, sum = 0;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Armstrong numbers in the given range are:\n");
    for( i = start; i <= end; i ++)
    {
        number = i;
        c = 0;
        sum = 0;
        n = number;

        while( number != 0)
        {
            number = number / 10;
            c = c + 1;
        }
        originalnumber = n;
        while( n != 0)
        {
            r = n % 10;
            sum = sum + round(pow(r,c));
            n = n / 10;
        }
        if ( sum == originalnumber)
        {
            printf("%d\n", originalnumber);
        }
        
    }

    return 0;
}