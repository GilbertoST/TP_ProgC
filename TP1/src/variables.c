#include <stdio.h>

int main(void) {
    char c = 'A';
    unsigned char uc = 'Z';

    short s = -123;
    unsigned short us = 12345;

    int i = -123456;
    unsigned int ui = 123456;

    long l = -123456789L;
    unsigned long ul = 123456789UL;

    long long ll = -1234567890123LL;
    unsigned long long ull = 1234567890123ULL;

    float f = 3.5f;
    double d = 2.75;
    long double ld = 4.5L;

    printf("char = %c\n", c);
    printf("unsigned char = %c\n", uc);
    printf("short = %hd\n", s);
    printf("unsigned short = %hu\n", us);
    printf("int = %d\n", i);
    printf("unsigned int = %u\n", ui);
    printf("long = %ld\n", l);
    printf("unsigned long = %lu\n", ul);
    printf("long long = %lld\n", ll);
    printf("unsigned long long = %llu\n", ull);
    printf("float = %f\n", f);
    printf("double = %f\n", d);
    printf("long double = %Lf\n", ld);
    return 0;
}
