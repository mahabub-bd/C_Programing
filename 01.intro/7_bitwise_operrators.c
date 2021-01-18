#include <stdio.h>
int main(void)
{
    unsigned char a = 12;
    unsigned char b = 25;

    unsigned char c = a & b;
    printf("AND Operation - %d\n", c);

    unsigned char d = a | b;
    printf("OR Operation- %d\n", d);
    unsigned char e = a ^ b;
    printf("XOR Operation- %d\n", e);
    unsigned char f = ~25;
    printf("Complement - %d\n", f);
    unsigned char rs1 = 212 >> 1;
    unsigned char rs2 = 212 >> 2;
    unsigned char rs3 = 212 >> 3;
    printf("Right Shift 1 -%d\n", rs1);
    printf("Right Shift 2 -%d\n", rs2);
    printf("Right Shift 3 -%d\n", rs3);

    unsigned char ls1 = 212 << 1;
    unsigned char ls2 = 212 << 2;
    unsigned char ls3 = 212 << 3;
    printf("Left Shift 1 -%d\n", ls1);
    printf("Left Shift 2 -%d\n", ls2);
    printf("Left Shift 3 -%d\n", ls3);

    return 0;
}
