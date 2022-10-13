#include <stdio.h>
#include <string.h>
int main ()
{
    char country[100][100] = {"Bangladesh", "srilanka", "pakistan", "India", "Maldives", "Bhutan","Nepal"};
    int i, j, length;
    length = strlen(country[i]);

    for (i=0; i<length; i++)
    {
        for (j=0; j<length; j++)
        {
            printf("%c", country[i][j]);
        }
        printf("\n");
    }
    return 0;
}
