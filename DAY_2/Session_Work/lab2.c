#include <stdio.h>

int main() {
    int number = 2147483647;

    while (number > 100) {
        printf("Please enter a number less than 100: ");
        scanf("%d", &number);
    }
    printf("You did it!\n");
    return 0;
}