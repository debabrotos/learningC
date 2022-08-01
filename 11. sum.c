#include <stdio.h>
int main()
{
    int i, j, namo; 
    int sum = 0;
    for ( i = 1; i < 11; i++)
    {
        
        for ( j = 1; j < 11; j++)
        {
            namo = (i * j);
            sum += namo;
            
        }
    }
    printf("%d\n",sum);
    return 0;
}
