#include <stdio.h>

int main(void)
{
    int num, multiplication = 1, i;

    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        multiplication = multiplication * i;

    }
    printf("%d", multiplication);

    printf("\n");

    return 0;

}