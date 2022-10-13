#include <stdio.h>
#include <string.h>
int main ()
{
    int i, j, length, n, temp;

    char arr[500];
    gets(arr);

    length = strlen(arr);

    for (i=0; i<length; i++)
    {
        for (j=0; j<length; j++)
        {
            if (arr[i]==arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }

    }
    printf("%s\n",arr);




    return 0;
}
