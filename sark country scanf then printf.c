#include <stdio.h>
#include <string.h>
int main ()
{
    char country[100][100];
    int i, j, n;

    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%s", country[i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {

            printf("%s\n", country[i][j]);
        }
    }

    return 0;
}
