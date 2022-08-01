#include <stdio.h>
int main()
{
    int ara1[] = {3,4,5,1,2};
    int ara2[5];
    int i, minimum, minimum_index,  index_2;

    for ( index_2 = 0; index_2 < 5; index_2++)
    {
        minimum = 100;
        for ( i = 0; i < 5; i++)
        {
            if (ara1[i] < minimum)
            {
                minimum = ara1[i];
                minimum_index = i;
            }
        }
        ara1[minimum_index] = 100;
        ara2[index_2] = minimum;
    }
    printf("Storted Number is :");
    for ( i = 0; i < 5; i++)
    {
        printf(" %d", ara2[i]);
    }
    return 0 ;
}