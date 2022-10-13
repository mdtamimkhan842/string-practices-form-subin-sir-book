#include <stdio.h>
int main ()
{
    int i, j, n, sum, fact=1, reverse=0;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        fact = i*fact;
    }
    while(fact != 0)
    {
        reverse = (reverse*10)+(fact%10);
        fact = fact/10;
    }
    printf("%d \n", reverse);

    return 0;
}
