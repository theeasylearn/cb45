#include <stdio.h>
void main()
{
    int a = 10;
    int x = 10;
    int b, z;

    printf(" a = %d x = %d", a, x);
    // ++a
    // b =a
    b = ++a;
    printf("\n b = %d a = %d", b, a); // 11 11

    // z = x
    // x++
    z = x++;
    printf("\n z = %d x = %d", z, x); // 10 11
}