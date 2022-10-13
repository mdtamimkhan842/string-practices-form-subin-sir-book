#include <stdio.h>
#include <string.h>
int main ()
{
    char country[7][100] = {"Bangladesh", "srilanka", "pakistan", "India", "Maldives", "Bhutan","Nepal"};
    int i, j, length, length2;
    length = strlen(country[i]);

    for (i=0; i<length; i++)
    {
        int sum = 0;
        for (j=0; j<length; j++)
        {
            sum = sum + country[i][j];

        }
        printf("sum of the row %d : %d\n", i, sum);

    }
    printf("\n");
    //length2 = strlen(country[j]);

    for (i=0; i<length; i++)
    {
        int sum2 = 0;
        for (j=0; j<length; j++)
        {

            sum2 = sum2 + country[j][i];
        }

        printf("sum of the column %d:  %d\n",i, sum2);
    }

    return 0;
}
