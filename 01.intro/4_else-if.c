#include <stdio.h>
int main(void)
{
    int nayem = 23;
    int maruf = 25;
    if (nayem > maruf)

    {
        printf("Nayem is elder\n");
    }
    else if (maruf > nayem)
    {
        printf("Maruf is Elder\n");
    }
    else
    {
        printf("They are same age\n");
    }

    char color_code = 'R';
    printf("Enter Color Code\n");
    scanf("%c", &color_code);
    if (color_code == 'R')
    {
        printf("It is RED\n");
    }
    else if (color_code == 'G')
    {
        printf("It is Green\n");
    }
    else if (color_code == 'B')
    {
        printf("It is Blue\n");
    }
    else
    {
        printf("Wrong Color\n");
    }
    return 0;
}