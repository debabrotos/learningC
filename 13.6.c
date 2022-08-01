#include <stdio.h>
int main()
{
    int n, k;
    printf("Type Your Number : " );
    scanf("%d", &n);
    for ( k = n; k > 1; k-- )
    {
        n = n * (k - 1);
    }
    printf("Factorial is : %d", n);
    return 0;
}