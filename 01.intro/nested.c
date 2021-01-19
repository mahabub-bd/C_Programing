#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d", &age);
    bool has_nid = true;
    bool has_passport = true;
    
    if (age >= 18)
    {
        if (has_nid || has_passport)
        {
            printf("Ok, Lets Proced\n");
        }
        else
        {
            printf("You are not accepted\n");
        }
    }
    else
    {
        printf("You are not allowed\n");
    }

    return 0;
}