#include <stdio.h>
int main ()
{
    int arr[500], n, i, j, temp;
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (arr[i]<arr[j])
            {
                temp =arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i=1; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}
