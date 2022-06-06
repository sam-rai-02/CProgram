#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    if (num % 2) printf("This is odd number");

    else printf("This is even number");

    printf("\n");

    return 0;
}