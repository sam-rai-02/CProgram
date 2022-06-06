#include <stdio.h>
int main(void)
{
    int num, sum = 0, product = 1;

    for(num = 1; num <= 6; num = num + 1)
    {
        sum = sum + num;
        product = product * num;

    }

    printf("Sum and Product = %d %d", sum, product);

    printf("\n");

    return 0;
}