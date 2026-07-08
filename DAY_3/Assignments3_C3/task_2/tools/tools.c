// import the header file
#include "tools.h"

void generate_mul_table(int num) {
    for (int count = 1; count <= num; count++) {
        int result = num * count;
        printf("%d * %d = %d\t", num, count, result);
    }
    printf("\n");
}