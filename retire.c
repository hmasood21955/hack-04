#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    float initial_balance = atof(argv[1]);
    float monthly_contribution = atof(argv[2]);
    float annual_rate_of_return = atof(argv[3]);
    float annual_rate_of_inflation = atof(argv[4]);
    float years_until_retirement = atof(argv[5]);

    double balance = initial_balance;
    double inflation_adj_interest, new_balance;

    double monthly_rate_of_return = annual_rate_of_return / 12.0;
    double monthly_rate_of_inflation = annual_rate_of_inflation / 12.0;



