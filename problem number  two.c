#include <stdio.h>
int main ()
{
    int i, j, n, k;

    scanf("%d", &n);

    for (i=n; i>=1; i--)
    {
        for (k=i; k < n; k++)
        {
            printf(" ");
        }

        for (i=0; i<=n; i++)
        {
            for (j=i; j<=n; j++)
            {
                printf("c");
            }
            printf("\n");
        }
        for (i=0; i<=n; i++)
        {
            for (j=0; j<=i; j++)
            {
                printf("c");
            }
            printf("\n");
        }
    }

    return 0;
}
