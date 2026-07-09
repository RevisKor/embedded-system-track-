#include <stdio.h>

int add(int *num1, int *num2);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = add(&num1, &num2);

    printf("The reuslt is: %d\n", sum);

    return 0;
}

int add(int *num1, int *num2) {
    int result = *num1 + *num2;
    return result;
}