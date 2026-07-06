#include <stdio.h> 

int main() {
    float num1;
    float num2;
    char op;

    scanf("%f%c%f", &num1, &op, &num2);
    
    switch(op) {
        case '+':
        printf("%.1f %c %.1f = %.1f\n", num1, op, num2 , num1 + num2);
        break;
        case '-':
        printf("%.1f %c %.1f = %.1f\n", num1, op, num2 , num1 - num2);
        break;
        case '*':
        printf("%.1f %c %.1f = %.1f\n", num1, op, num2 , num1 * num2);
        break;
        case '/':
        if (num2 != 0) {
            printf("%.1f %c %.1f = %.3f\n", num1, op, num2 , num1 / num2);
            break;
        }
        printf("Divide by zero error\n");
        break;
        default:
            printf("Unknown operartor\n");
            break;

    }

    return 0;
}