#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 40;
    int b = 30;
    // >
    bool a_is_greater = a > b;
    printf("A is greater than B - %d\n", a_is_greater);
    //<
    int c = 45;
    int d = 50;
    bool c_is_smaller = c < d;
    printf("C is smaller than D- %d\n", c_is_smaller);
    // ==
    bool a_is_b = a == b;
    printf("A is B -%d\n", a_is_b);
    // !=
    bool a_is_not_b = a != b;
    printf("A is Not B - %d\n", a_is_not_b);
//
    return 0;
}