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

    // Number 2 
    int number1, number2, number3;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    printf("Enter the third number: ");
    scanf("%d", &number3);

    printf("Number: %d\nNumber: %d\nNumber: %d\n", number3, number2, number1);

    // Number 3
    int num1, num2, sum, sub, anding, oring, xoring; // make varaibles

    printf("Enter the first number: "); // get num1 and num2
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;          // ADD
    sub = num1 - num2;          // SUBTRACT
    anding = num1 & num2;       // BITWISE AND
    oring = num1 | num2;        // BITWISE OR
    xoring = num1 ^ num2;       // BITWISE XOR

    // Print everything 
    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, sub);
    printf("%d & %d = %d\n", num1, num2, anding);
    printf("%d | %d = %d\n", num1, num2, oring);
    printf("%d ^ %d = %d\n", num1, num2, xoring);
    
    return 0;
}