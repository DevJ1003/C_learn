#include <stdio.h>

int main()
{

    enum Weekdays
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    enum Weekdays today = Wednesday;

    switch (today)
    {
    case Sunday:
        printf("Today is Sunday");
        break;

    case Monday:
        printf("Today is Monday");
        break;

    case Tuesday:
        printf("Today is Tuesday");
        break;

    case Wednesday:
        printf("Today is Wednesday");
        break;

    case Thursday:
        printf("Today is Thursday");
        break;

    case Friday:
        printf("Today is Friday");
        break;

    case Saturday:
        printf("Today is Saturday");
        break;

    default:
        printf("Wrong input");
        break;
    }

    return 0;
}