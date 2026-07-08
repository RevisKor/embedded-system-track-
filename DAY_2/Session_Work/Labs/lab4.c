#include <stdio.h>

int main() {

    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    int count = number;

    while(count > 1) {
        factorial *= count--;
    }

    printf("The factorial of %d is %d\n", number, factorial);
    return 0;
}