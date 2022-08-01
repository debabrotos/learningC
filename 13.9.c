#include <stdio.h>
int main()
{
    int i = 0, j = 0, k ;
    char c; 
    int grid[10][10];

    for ( i = 0, j = 0 ; i < 10; i++, j++)
    {
        grid[i][j] = 1 ;
    }
    printf("Enter the Blocked Cells :");
    scanf("%d %d" , &i, &j);
    grid[i][j] = 0;
    
    printf("Command : ");
    while (1)
    {
        scanf("%c", &c);
            if ( c == 'S')
            {
                break;
            }
            else if (c == 'A')
            {
                i--;
            }
            else if (c == 'D')
            {
                i++;
            }
            else if (c == 'W')
            {
                j--;
            }
            else if (c == 'S')
            {
                j++;
            }
    }
    printf("Cell Position : %d %d \n \n ", i, j  );
    return 0;
}