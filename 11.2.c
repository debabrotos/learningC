#include <stdio.h>
int main(){
    int namo[10][10];
    int i, j, res;

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            namo[i][j] = (i + 1) * (j + 1);
        }
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n",(i+1) ,(j+1),  namo[i][j] );
        }
        printf("\n");
    }
    
    return 0;
}