#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int picked_number, given_number;
    time_t t;
    srand((unsigned)time(&t));
    picked_number = rand() % 10;
    printf("Enter Your Choosen Number-\n");
    scanf("%d", &given_number);
    if (picked_number == given_number)
    {
        printf("You are win!!!!");
    }
    else
    {
        printf("You Are Lose");
    }
    return 0;
}