#include <stdio.h>
double area( double num1 )
{
    double sum = (3.14159265359 * num1 * 2) ;
    return sum;
}
int main()
{
    double a,b;
    a = 2;
    b = area(a);
    printf("%lf\n", b);
    return 0;
}

