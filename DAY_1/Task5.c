#include <stdio.h>

int main(void) {
    int x = 15, y = 20, z = x & y, k = x | y, l = x ^ y, m = x>>3, n = y << 4;

    printf("%d is %b\n", z, z);
    printf("%d is %b\n", k, k);
    printf("%d is %b\n", l, l);
    printf("%d is %b\n", m, m);
    printf("%d is %b\n", n, n);

    return 0;
}