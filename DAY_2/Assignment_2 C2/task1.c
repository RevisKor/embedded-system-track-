#include <stdio.h>

int main() {

    int num1, num2, num3; // initialize the vairables

    // Get the numbers
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);
    printf("Enter a number: ");
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3)) {   // if num1 is bigger than both then it is the biggest
        printf("Number 1 is the biggest: %d", num1);
    } else if ((num2 > num1) && (num2 > num3)) { // if num2 is bigget than both its the biggest
        printf("Number 2 is the biggest: %d\n", num2);
    } else {
        printf("Number 3 is the biggest: %d\n", num3); // if neither is true then num3 is the biggest
    }
    
    return 0;
}