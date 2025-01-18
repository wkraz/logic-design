#include <stdio.h>

int main()
{
    printf("Go Irish!\n");
    printf("-1 = %x\n", -1);
    printf("-2 = %x\n", -2);
    printf("-3 = %x\n", -3);

    printf("0x7ffffffe = %d\n", 0x7ffffffe);
    printf("0x7fffffff = %d\n", 0x7fffffff);
    printf("0x80000000 = %d\n", 0x80000000);
    printf("0x80000001 = %d\n", 0x80000001);

    float z1 = 18.42;
    printf("%.20f\n", z1);

    double z2 = 18.42;
    printf("%.20f\n", z2);

    float z3 = 0.5;
    printf("%.20f\n", z3);

    int shift1 = 13;
    printf("Shifting %d\n", shift1);
    int shifted = shift1 << 1;
    printf("Shifted decimal value: %d\n", shifted);
    printf("Shifted hex value: %x\n", shifted);

    int shift2 = 13;
    int shift3 = -13;
    int shifted2 = shift2 >> 1;
    int shifted3 = shift3 >> 1;
    printf("Shifting %d: decimal: %d, hex: %x\n", shift2, shifted2, shifted2);
    printf("Shifting %d: decimal: %d, hex: %x\n", shift3, shifted3, shifted3);

    unsigned int shift4 = 13;
    unsigned int shift5 = -13;
    printf("-13 as an unsigned integer: %u\n", shift5);
    unsigned int shifted5 = shift5 << 1;
    printf("Shifting -13 left one bit: %u\n", shifted5);
    shifted5 = shift5 >> 1;
    printf("Shifting -13 right one bit: %u\n", shifted5);

    return 0;
}
