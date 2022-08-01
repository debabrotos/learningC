#include <stdio.h>
#include <stdio.h>
int main()
{
    char sarc[7][100] = {"Bangladesh" , "India", "Pakistan","Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row;
    for ( row = 0; row < 7; row++)
    {
        printf("%s", sarc[row]);
        printf("\n");
    }
    
    return 0; 
}