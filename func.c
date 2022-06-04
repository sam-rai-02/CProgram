#include <stdio.h>

int add(int num1, int num2);

int main(void)
{
    int num1, num2, result;

    scanf("%d %d", &num1, &num2);

    result = add(num1, num2);

    printf("%d", result);

    return 0;
}

int add(int num1, int num2)
{
    int result;

    result = num1 + num2;

    return result;
}
