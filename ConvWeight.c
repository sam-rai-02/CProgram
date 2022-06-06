#include <stdio.h>

int main(void)
{
    float weight, moon_weight, earth_weight, g = 9.8;

    printf("Enter the weight : ");
    scanf("%f", &weight);

    earth_weight = g * weight;
    moon_weight = earth_weight * (.17);

    printf("Moon weight is %f", moon_weight);

    printf("\n");

    return 0;
}