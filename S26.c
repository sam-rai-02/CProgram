#include <stdio.h>

float o_to_c(float c);

int main(void)
{
    float ounces, cups;

    cups = o_to_c(ounces);
    
    printf("%f cups", cups);

    printf("\n");

    return 0;
}
float o_to_c(float c)
{
    float ounces, cups;

    printf("Enter the ounces : ");
    scanf("%f", &ounces);

    return ounces / 8.0;
}