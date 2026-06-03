//WAP to print prime numbers in a range.
#include<stdio.h>
int main ()
{
    int i, start, end, j, prime;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("The prime numbers in the given range are:\n");

    for( i = start; i <= end; i ++)
    {
        if( i < 2)
        continue;

        prime = 1;

        for( j = 2; j < i ; j++)
        {
            if( i % j == 0)
            {
                prime = 0;
                break;
            }
        }
       if( prime == 1)
       {
        printf("%d  ", i);
       }     
    }
   
    return 0;

}