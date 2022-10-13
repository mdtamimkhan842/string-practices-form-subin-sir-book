#include <stdio.h>
int main ()
{
    int arr[500][500];
    int i, j, k, n, sum = 0;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            arr[i][j]= i*j;
        }
    }

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if ((i*j)%2==0)
            {

                sum = sum + arr[i][j];
            }
        }

    }
    printf("%d\n", sum);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            printf("%d * %d = %d\n", i, j, arr[i][j]);
        }
    }
    printf("\n");

    return 0;
}
