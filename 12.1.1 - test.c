#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char bin[65];
    int position, length, decimal, i;
    printf("Enter the Binary number : ");
    scanf("%s", bin);
    length = strlen(bin);
    position = length - 1;

    for ( i = 0; i < length; i++)
    {
        decimal += bin[i] * pow(2, position);
        position-- ;
    }
    printf("The Decimal Value is : %d\n", decimal);

    return 0 ;
}
