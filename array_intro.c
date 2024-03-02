#include <stdio.h>

int main()
{

    int grades[10];
    int count = 10;
    int sum = 0;
    float average = 0;

    printf("Enter the 10 grades:\n");

    int i;
    for (i = 0; i < count; i++)
    {
        printf("%d>", i + 1);
        scanf("%d", &grades[i]);
        sum = sum + grades[i];
    }

    average = sum / count;
    printf("\nAverage of the ten grades entered is: %0.2f\n", average);

    return 0;
}