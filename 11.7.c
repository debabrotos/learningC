#include <stdio.h>
int main()
{
    int one[5][5]  = {
        {6,4,7,8,9}, 
        {3,7,1,9,9} ,
        {8,6,4,2,7},
        {2,4,2,5,9},
        {4,1,6,7,3}
    };
    int two[5][5];
    int row = 0, col = 0;

    for ( row = 0; row < 5; row++)
    {
        for ( col = 0; col < 5; col++)
        {
            two[col][row] = one[row][col]; 
            printf("%d\n", two[col][row]);
        }
        printf("\n");
    }
    return 0;
}