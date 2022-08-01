#include <stdio.h>
#include <stdio.h>
int main()
{
    char sarc[7][100] = {"Bangladesh" , "India", "Pakistan","Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row, col, name_len;
    for ( row = 0; row < 7; row++)
    {
        name_len = strlen(sarc[row]);
        for ( col = 0; col < name_len; col++)
        {
            printf("(%d, %d) = %c\n",row, col, sarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}