#include <stdio.h>

int main(void) {
    int number1, number2;

    printf("Enter Number 1: ");
    scanf("%d", &number1);
    printf("Enter Number 2: ");
    scanf("%d", &number2);


    printf("%d + %d = %d\n",number1, number2, number1 + number2);
    printf("%d * %d = %d\n",number1, number2, number1 * number2);
    return 0;
}