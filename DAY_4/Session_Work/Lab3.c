#include <stdio.h>

void calculate(int num1, int num2, int* sum, int* sub);
void calcualte_arr(int num1, int num2, int *results);

int main() {
    int num1, num2;
    int result[2];

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    calcualte_arr(num1, num2, result);

    int sum = result[0];
    int sub = result[1];

    printf("The sum is: %d\n", sum);
    printf("The subtaction is: %d\n", sub);


    return 0;
}


void calculate(int num1, int num2, int* sum, int* sub) {
    *sum = num1 + num2;
    *sub = num1 - num2;
}

void calcualte_arr(int num1, int num2, int *results) {
    results[0] = num1 + num2;
    results[1] = num1 - num2;
}
