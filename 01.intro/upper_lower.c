#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Your Character-");
    scanf("%c", &ch);
    if (ch >= 48 && ch <= 57)
    {
        printf("%c is a number\n", ch);
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("%c is a Uppercase Letter\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c is a Lowercase Letter\n", ch);
    }
    else
    {
        printf("Special Charecter\n");
    }

    return 0;
}