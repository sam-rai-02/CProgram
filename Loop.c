#include <stdio.h>

int main(void)
{
    int num;

    for(num = 1; num < 11; num = num + 1) printf("%d", num);

    printf("Terminating");

    printf("\n");
    
    return 0;
}