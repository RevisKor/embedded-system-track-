#include <stdio.h>
#include "tools/tools.h"

int main() {
    int array[10];

    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }

    for (int i = length - 1 ; i >= 0; i--) {
        printf("Number of index %d is: %d\n", i, array[i]);
    }
    
    return 0;
}