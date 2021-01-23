#include <stdio.h>
int main(void)
{
    char name[25];
    int i = 0;
    printf("Enter A String: ");
    fgets(name, 30, stdin);

    while (name[i])
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i]  = name[i]+32;
        }
        i++;
    }
    printf("Output: %s\n", name);
    
    return 0;
}