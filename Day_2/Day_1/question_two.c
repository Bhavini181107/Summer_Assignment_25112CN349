//WAP to print multiplication table of a given number
#include<stdio.h>
int main ( )
{
    int i, number ;

    printf("Enter a number whose multiplication table is to printed:");
    scanf("%d", &number);

    printf("The multiplication table is as follows:\n");

    for (i=1; i <=  10; i++ )
    {
        printf(" %d * %d = %d\n", number, i, number*i );
    }
    
    return 0;
}