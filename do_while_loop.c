#include <stdio.h>

int main()
{

    int num = 0;
    int i = 0;
    printf("Enter the number to print table: ");
    scanf("%d", &num);
    printf("You entered %d", num);

    do
    {
        printf("\n%d * %d = %d", num, i, (num * i));
        i++;
    } while (i <= 10);
}