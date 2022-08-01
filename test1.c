#include <stdio.h>
int main(){
    int factorial = 5;
    int i;
        for ( i = factorial; i > 1 ; i--)
        {
            factorial =  factorial * (i -1);
            printf("%d \n", i);
            printf("%d \n", factorial);
            printf("\n");
        }

    // scanf("%d", &T);
    // for ( j = 0; j < T; j++)
    // {

    // }
    return 0;


}

