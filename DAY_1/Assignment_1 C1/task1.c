#include <stdio.h>

int main(void) {
    // Number 1 print out each line on its own
    printf("     *\n");
    printf("    ***\n");
    printf("   *****\n");
    printf("  *******\n");
    printf(" *********\n");
    printf("***********\n");

    // Number one using for loops
    int size = 6;

    for(int i = 0; i < size; i++) { // prints number of lines equal to the size
        for(int j = 0; j < size - i; j++) { // prints spaces before the * that go down 5, 4, 3, ...
            printf(" ");
        }
        for(int k = 0; k < 2 * i - 1; k++) { // prints * that go up like *, ***, *****, ... (2 * i + 1)
            printf("*");
        }
        printf("\n");
    }

    return 0;
}