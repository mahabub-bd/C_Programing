#include <stdio.h>
int main()
{

    // Short - %d %hi
    short a = -550;
    printf("I am short - %hi\n", a);
    //int - %d %i
    int b = 1000;
    printf("I am Int - %d\n", b);
    // Long  - %ld, %li
    long c = 1200L;
    printf("I am Long - %ld\n", c);
    // Long Long - %lld, %lli
    long long d = 1000;
    printf("I am Long Long - %lld\n", d);
    //octal - %o
    int o = 077;
    printf("I am Octal - %o\n ", o);
    printf("I am decimal of octal-%d\n", o);
    // Heaxadecimal Int -5x, %X
    int h = 0Xfff;
    printf("I am Hexadecimal - %X\n", h);
    // Unsigned Integers
    // Unsigned short - %hu
    unsigned short us = 41;
    printf("Unsigned short - %hu\n", us);
    // Unsigned Int - %u
    unsigned int ui = 4454;
    printf("Unsigned int - %u\n", ui);
    // Unsigned Long - %lu
    unsigned long ul = 455555;
    printf("Unsigned Long - %lu\n", ul);
    // Unsigned Long Long - %llu
    unsigned long long ull = 45544555;
    printf("Unsigned Long Long - %lu\n", ull);
    // Unsigned negative
    unsigned short negative = -2;
    printf("Negative Unsigned - %hu\n", negative);
    return 0;
}