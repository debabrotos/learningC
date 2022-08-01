#include <stdio.h>
int main()
{
    double loan_amount, total_amount, interest_rate, number_of_year, monthly_amount;

    printf("Enter the Loan amount : ");
    scanf("%lf", &loan_amount);

    printf("Enter the Interest Rate :  ");
    scanf("%lf", &interest_rate);

    printf("Enter the Number Of Year : ");
    scanf("%lf", &number_of_year);

    total_amount = loan_amount + (loan_amount * interest_rate * number_of_year)/ 100;

    monthly_amount = total_amount / (number_of_year * 12);

    printf("Total Amount : %lf\n", total_amount);
    printf("Monthly Amount : %lf\n", monthly_amount);

    return 0;
}
