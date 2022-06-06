#include <stdio.h>

float convert(float pound);

int main(void)
{
    float pound, dollar;

    pound = convert(dollar);


    printf("%f pound", pound);


    printf("\n");

    return 0;

}
float convert(float pound)
{
    float dollar;

    printf("Enter the dollar : ");
    scanf("%f", &dollar);
    
    return dollar / 2;
}