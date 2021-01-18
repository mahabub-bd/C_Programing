#include <stdio.h>
int main(void)
{
    int a = 5;
    int result = a + a++ + a++;
    printf("A = %d\n", a);
    printf("Result- %d\n", result);
    int result2= a + a-- + a--;
    printf("A = %d\n", a);
    printf("Result- %d\n", result2);
    return 0;
}