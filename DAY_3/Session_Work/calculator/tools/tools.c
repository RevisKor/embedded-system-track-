// import header file
#include "tools.h"

void print_hello(void) {
    printf("Hello, world!\n");
}

char get_operation() { // get the operation 
    char op;
    printf("What operation do you want?: (+ , - , * , /) ");
    scanf(" %c", &op);

    return op;
}

int add(int num1, int num2) { // function to add
    return num1 + num2;
}

int sub(int num1, int num2) { // function to subtract
    return num1 - num2;
}

int mul(int num1, int num2) { // function to multiply
    return num1 * num2;
}

int div(int num1, int num2) { // function to divide
    return num1 / num2;
}

int calculator() { // main calc logic
    int num1, num2, result; // initialize the vars
    char op;
    printf("Hello! this is a calculator for 2 numbers (just 2 😑)\n");
    sleep(ONE_SECOND);

    printf("Enter Number 1: ");
    scanf("%d", &num1);
    sleep(ONE_SECOND);

    printf("Enter Number 2: ");
    scanf("%d", &num2);
    sleep(ONE_SECOND);

    op = get_operation();
    sleep(ONE_SECOND);
    

    switch(op) { // check which operation to do 
        case '+': result = add(num1, num2);
            loading();
            printf("result = %d\n", result);
            break;
        case '-': result = sub(num1, num2);
            loading();
            printf("result = %d\n", result);
            break;
        case '*': result = mul(num1, num2);
            loading();
            printf("result = %d\n", result);
            break;
        case '/': if (num2 == 0) {
                    printf("Divide By Zero Error\n");
                } else {
                    result = div(num1, num2);
                    loading();
                    printf("result = %d\n", result);
                }
                break;
        default: printf("Inavalid Operation\n");
                break;
    }

}

void loading(void) {
    sleep(ONE_SECOND);
    printf("Calculating ... \n");
    sleep(ONE_SECOND);
}