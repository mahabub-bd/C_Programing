#include <stdio.h>
int main(void)
{
    int a, b;
    char ch = 'c';
    while (ch != 'q')
    {
        printf("Enter Two Number :\n");
        scanf("%d %d", &a, &b);
        printf("Result = %d\n", a + b);

        printf("Type c to run again. Type q to quit\n");
        scanf(" %c", &ch);
    }

    return 0;
}