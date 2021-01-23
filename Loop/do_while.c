#include <stdio.h>
int main(void)
{
    int n = 5;
    while (n<5)
    {
        printf("Its not run");
        
    }
    do
    {
        printf("I will run at least once\n");
    } while (n < 5);
    
    
    return 0;
}