#include <stdio.h>

int outnum(int num);

int main(void)
{
    outnum(225);
    printf("\n");

    return 0;
}
int outnum(int num)
{
    printf("%d", num);
}