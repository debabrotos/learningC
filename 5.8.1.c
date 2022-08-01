#include <stdio.h>
int main()
{
    int i, j, k, lcm;
    while (1)
    {
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
                lcm  = (i * j) / k;
                printf("the GCD is : %d\n", k);
                printf("the LCM is : %d", lcm);
                break;
            }
        }
    }
    
    return 0;
}
