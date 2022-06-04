#include <stdio.h>

int func(void);

int main(void)
{
    int num;
    num = func();

    printf("%d", num);

    printf("\n");
     return 0;

}
int func(void)
{
    return 10;

}