#include<stdio.h>
#include<math.h>

int main(){
    int i, decimal = 95;
    char binary[100];

    while (decimal != 0)
    {
        if (decimal % 2 == 0)
        {
            binary[i] = '0';
            printf("%d", binary[i]  - '0');
        }
        else{
            binary[i] = '1';
            printf("%d", binary[i]  - '0');
        }
        decimal = decimal / 2  ;
    }
    return 0;
}
