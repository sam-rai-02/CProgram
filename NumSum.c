#include <stdio.h>

int main()
{
    int a, b, answer;
    

    printf("Enter first number ");
    scanf("%d", &a);

    printf("Enter second number ");
    scanf("%d",&b);

    answer = a + b;

    printf("Answer is %d + %d = %d", a, b, answer );


    printf("\n");

    return 0;
    
}