//WAP to generate fibbonaaci series.
#include<stdio.h>
int main ()
{
    int n, term1 = 0, term2 = 1, nextterm, i;

    printf("Enter the number of terms for tthe fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for( i = 0; i <= n; i++ )
    {
       printf("%d", term1);

       nextterm = term1 + term2;
       term1 = term2;
       term2 = nextterm;
    }

    printf("\n");
    
    return 0;
}