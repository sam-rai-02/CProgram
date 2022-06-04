#include<stdio.h>

int main(void)
{
    float earth_days, jovian_years;

    printf("Enter the earth days : ");
    scanf("%f", &earth_days);

    jovian_years = earth_days / (365 * 12);

    printf("Here is the jovian years : %f", jovian_years);


    printf("\n");
    return 0;
}