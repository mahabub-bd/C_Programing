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
    while (chance > 0)
    {
        printf("Guess The Lucky Number:(Remaining Change:%d):", chance);
        scanf("%d", &choosen_number);
        if (lucky_number == choosen_number)
        {
            printf("Congratulation! You have choose the correct Number\n");
            is_loss = false;
            break;
        }
        chance--;
    }
    if(is_loss)
    {
        printf("You Have Loss. Lucky Number is %d\n",lucky_number);
    }

    return 0;
}