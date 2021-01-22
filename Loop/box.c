#include <stdio.h>
int main(void)
{
    int width, height, i, j;
    printf("Enter Box Height\n");
    scanf("%d", &height);
    printf("Enter Box Width\n");
    scanf("%d", &width);
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}