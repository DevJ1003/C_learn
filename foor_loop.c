#include <stdio.h>

int main()
{

    int num = 0;
    int i;
    printf("Enter the number to print table: ");
    scanf("%d", &num);
    printf("You entered %d", num);

    for (i = 0; i <= 10; i++)
    {
        printf("\n%d * %d = %d", num, i, (num * i));
    }

    return 0;
}