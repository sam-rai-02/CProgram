#include <stdio.h>

int main(void)
{
    float num;
    int choice;

    printf("1: Feet to Meteres.\n2: Meters to Feet\n ");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &num);

    if(choice == 1) printf("%f", num / 3.28);
    if(choice == 2) printf("%f", num * 3.28);

    printf("\n");

    return 0;
}