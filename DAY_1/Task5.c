#include <stdio.h>

int main(void) {
    int x = 15,
    y = 20, 
    z = x & y, // BTIWISE AND
    k = x | y, // BITWISE OR
    l = x ^ y, // BITWISE XOR
    m = x>>3, // SHIFT RIGHT BY 3
    n = y << 4; // SHIFT LEFT BY 4

    printf("%d is %b\n", z, z);
    printf("%d is %b\n", k, k);
    printf("%d is %b\n", l, l);
    printf("%d is %b\n", m, m);
    printf("%d is %b\n", n, n);

    return 0;
}