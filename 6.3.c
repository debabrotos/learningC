#include <stdio.h>
int main()
{
    int ara[5] = {1,2,3,4,5};
    int i;
    for(i=4; i >= 0; i--){
        printf("%d Number Element is : %d\n",
               i+1, ara[i] );
    }

    return 0;
}
