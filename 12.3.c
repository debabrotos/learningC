#include <stdio.h>
#include <math.h>
int main()
{
    int dec = 2343;
    int binDigit = log10(dec) / log10(2) + 1;
    
    // int binDigit, n;
    // for ( n = 0; ; n++)
    // {
    //     if ( pow(2,n) < dec ){
    //         continue;
    //     }
    //     else{
    //         binDigit = n  ;
    //         break;
    //     }
    // }

    char bin[binDigit];
    for (int i = 0; i < binDigit; i++)
    {
        bin[i] = '0';
    }
    int i = binDigit-1, sum = 0;
    while (i >= 0)
    {
        int current = pow(2, i);
        if (current + sum <= dec)
        {
            sum += current;
            bin[binDigit-i-1] = '1';
        }
        i--;
    }
    printf("%s", bin);
}