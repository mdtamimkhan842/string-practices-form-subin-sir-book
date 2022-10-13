#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    for (int i = 0; number != 0; i++)
    {
        sum = sum+ (number % 10) * pow(2, i);
        number = number/ 10;
    }
    printf("The Decimal Value of Binary Number is %d", sum);
    return 0;
}
