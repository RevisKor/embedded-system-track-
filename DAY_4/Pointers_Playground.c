#include <stdio.h>

void swap(int *num1, int *num2);

int main() {
    int arr[3][2][2] = {{1, 2}, {4, 5}, {5, 6}};
    int (*p)[3];

    printf("%p\n", arr);
    printf("%p\n", arr[0]);
    printf("%p\n", *arr);
    printf("%p\n", &arr[0][0]);
    return 0;
}


void swap(int *num1, int *num2) {
    int tmp = *num1;    // asign a local tmp var to the vlaue of num1
    *num1 = *num2;      // asign the value of num2 to num1
    *num2 = tmp;        // asign the value of old num1 through tmp to num2
}