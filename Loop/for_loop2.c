#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d is ODD\n", i);
        }
    }
    for (i = 2; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is EVEN\n", i);
        }
    }
    return 0;
}