#include <stdio.h>
int main()
{
    int i, j, k, l;
    scanf("%d %d", &i, &j);
    if (i < j)
    {
        k = i;
    }
    else{
        k = j;
    }
    for ( ; k >= 1; k--)
    {
        if (i % k == 0 && j % k == 0)
        {
            l = k;
            break;
        }
    }
    printf("the gcd is : %d", l);
    return 0;
}
