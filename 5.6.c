#include<stdio.h>
int main()
{
    double celcius, farenheit ;
    printf("Whats your temp in Celcius ? : ");
    scanf("%lf", &celcius);
    farenheit= (celcius * 1.8) + 32;
    printf("Your Temp is : %0.0lf Farenheit", farenheit );
}
