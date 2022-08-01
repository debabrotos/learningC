#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char bin[65];
    int length, decimal, position, i;
    printf("Enter the Binary Number : ");
    scanf("%s", bin);

    decimal = 0;
    length = strlen(bin);
    position = length - 1;

    for ( i = 0; i < length; i++)
    {
        decimal += (bin[i] - '0') * pow(2 , position);
        position-- ;
    }
    printf("decimal value is %d\n", decimal);
     return 0;
}