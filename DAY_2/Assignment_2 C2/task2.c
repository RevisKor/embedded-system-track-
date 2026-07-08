#include <stdio.h>

int main() {
    int num1, num2, operator, result;

    printf("Enter the Operation\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    scanf("%d", &operator); //get number that corresponds to the operator

    // get the numbers
    printf("Enter Num 1: ");
    scanf("%d", &num1);
    printf("Enter Num 2: ");
    scanf("%d", &num2);

    switch(operator) { // check which operation to do 
        case 1: result = num1 + num2;
            printf("result = %d\n", result);
            break;
        case 2: result = num1 - num2;
            printf("result = %d\n", result);
            break;
        case 3: result = num1 * num2;
            printf("result = %d\n", result);
            break;
        case 4: if (num2 == 0) {
                    printf("Divide By Zero Error\n");
                } else {
                    result = num1 / num2;
                    printf("result = %d\n", result);
                }
                break;
        default: printf("Inavalid Operation\n");
                break;
    }

    return 0;
}