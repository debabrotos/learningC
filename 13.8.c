#include <stdio.h>
int main()
{
    int x = 0, y = 0;
    char c;
    while (1)
    {
        scanf("%c", &c);
        if ( c == 'S')
        {
            break;
        }
        else if (c == 'A')
        {
            x--;
        }
        else if (c == 'D')
        {
            x++;
        }
        else if (c == 'W')
        {
            y--;
        }
        else if (c == 'S')
        {
            y++;
        }
        printf("X : %d , Y : %d  \n \n ", x, y);
        
        
    }
    return 0;     
}