#include <stdio.h>
int main ()
{

    int i, j, m,n;
    scanf("%d %d", &m, &n);
    int arr[m][n];

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<m; i++)
    {
        int rsum = 0;
        for (j=0; j<n; j++)
        {
            rsum = rsum + arr[i][j];
        }
        printf("\nSum of the row %d : %d\n", i, rsum);
    }


    for (i=0; i<m; i++)
    {
        int csum = 0;
        for (j=0; j<n; j++)
        {
            csum = csum+arr[j][i];
        }
        printf("\nSum of the column %d : %d\n", i, csum);
    }



    return 0;
}
