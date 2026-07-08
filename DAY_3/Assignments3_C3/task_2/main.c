#include <stdio.h>
#include "tools/tools.h"

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    generate_mul_table(number);

    return 0;
}