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

