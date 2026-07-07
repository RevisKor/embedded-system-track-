#include <stdio.h>

int main(void) {
    // Number 3
    int number1, number2, sum, sub, anding, oring, xoring; // make varaibles

    printf("Enter the first number: "); // get number1 and number2
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    sum = number1 + number2;          // ADD
    sub = number1 - number2;          // SUBTRACT
    anding = number1 & number2;       // BITWISE AND
    oring = number1 | number2;        // BITWISE OR
    xoring = number1 ^ number2;       // BITWISE XOR

    // Print everything
    printf("%d + %d = %d\n", number1, number2, sum);
    printf("%d - %d = %d\n", number1, number2, sub);
    printf("%d & %d = %d\n", number1, number2, anding);
    printf("%d | %d = %d\n", number1, number2, oring);
    printf("%d ^ %d = %d\n", number1, number2, xoring);

    return 0;
}