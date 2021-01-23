#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    time_t t;
    srand((unsigned)time(&t));

    int choosen_number, chance = 4;
    bool is_loss = true;
    int lucky_number = rand() % 10 + 1;
    do
    {
        printf("Guess The Lucky Number:(Remaining Change:%d):", chance);
        scanf("%d", &choosen_number);
        if (lucky_number == choosen_number)
        {
            printf("Congratulation! You have choose the correct Number\n");
            is_loss = false;
            break;
        }
        if (choosen_number < lucky_number)
        {
            printf("Your Choosen Number is small\n");
        }
        else
        {
            printf("Your Choosen Number is Bigger\n");
        }

        chance--;
    } while (chance > 0);
    if (is_loss)
    {
        printf("You Have Loss. Lucky Number is %d\n", lucky_number);
    }

    return 0;
}