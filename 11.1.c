#include <stdio.h>
int main()
{
    int marks[4][10]  = {
        {80,70,92,78,58,83,85,66,99,81}, 
        {80,70,92,78,58,83,85,66,99,81} ,
        {80,70,92,78,58,83,85,66,99,81},
        {0,0,0,0,0,0,0,0,0,0}
    };
    int col;
    for (col = 0; col < 10; col++)
    {
        marks[3] [col] = marks[0][col] / 4.0 + marks[1] [col] / 4.0 + marks[2][col] / 2.0;
        printf("Roll no. %d Total Marks : %d\n", col + 1, marks[3][col]);
    }
    return 0;
}
