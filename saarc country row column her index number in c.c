#include <stdio.h>
#include <string.h>
int main ()
{
    char country[7][100] = {"Bangladesh", "srilanka", "pakistan", "India", "Maldives", "Bhutan","Nepal"};
    int i, j, length;
    length = strlen(country[i]);

    for (i=0; i<length; i++)
    {
        for (j=0; j<length; j++)
        {
            printf("(%d ,%d) = %c,", i, j, country[i][j]);
        }
        printf("\n");
    }
    return 0;
}
