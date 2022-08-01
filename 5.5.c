#include<stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter the last number : ");
    scanf("%d", &n);
    i=1;
    sum = 0;
    for(;i <= n; i++){
        sum = (sum + i);
    }
    printf("Addition is : %d", sum);
}
