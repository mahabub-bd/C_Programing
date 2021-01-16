#include <stdio.h>
int main(void)
{
    char name[20];
    name[0] = 'M';
    name[1] = 'A';
    name[2] = 'H';
    name[3] = 'A';
    name[4] = 'B';
    name[5] = 'U';
    name[6] = 'B';
    name[7] = ' ';
    name[8] = 'H';
    name[9] = 'O';
    name[10] = 'S';
    name[11] = 'S';
    name[12] = 'A';
    name[13] = 'I';
    name[14] = 'N';
    printf("%s\n", name);
    char name1[20] = {'M', 'A', 'H', 'A', 'B', 'U', 'B'};
    printf("%s\n", name1);
    char name2[20] = "MAHABUB HOSSAIN";
    printf("%s\n", name2);
    char my_name[10];

    printf("What is Your Name");
    scanf("%s\n", my_name);
    printf("Thank You %s\n", my_name);
    return 0;
}