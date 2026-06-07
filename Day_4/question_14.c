//WAP to find nth Fibonacci term.
#include<stdio.h>
int main ()
{
    int n, i, term1 = 0, term2 = 1, nextterm = 0;

    printf("Enter the position of required term: ");
    scanf("%d", &n);

    if( n == 1) nextterm = term1;
    else if( n == 2) nextterm = term2;
    else
    {
        for( i = 3; i <= n; i++)
        {
            nextterm = term1 + term2;
            term1 = term2;
            term2 = nextterm;
        }

    }

    printf("The %dth term of Fibonacci series is: %d", n, nextterm);

    return 0;
    
}