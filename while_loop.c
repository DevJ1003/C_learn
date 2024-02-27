#include <stdio.h>

int main()
{

    int num = 0;
    int i = 0;
    printf("Enter the number to print table: ");
    scanf("%d", &num);
    printf("You entered %d", num);

    while (i <= 10)
    {
        printf("\n%d * %d = %d", num, i, (num * i));
        i++;
    }
}