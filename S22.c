#include <stdio.h>

void sum(int x, int y);

int main(void)
{
    sum(22 , 5);
    sum(20 , 7);
    sum(7 , 5);

    

    return 0;

}
void sum(int x, int y)
{
    printf("%d", x + y);
    printf("\n");
}