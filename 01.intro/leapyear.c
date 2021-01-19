#include <stdio.h>
int main(void)
{
    int year ;
    printf("Enter Year-");
    scanf("%d", &year);
    

    int is_leap_year = 0;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        is_leap_year = 1;
    }

    if (is_leap_year)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is a not leap year\n", year);
    }

    return 0;
}