#include <stdio.h>

void get_vals(int* arr);
int sum_arr(int* arr);

int main() {
    int *arr;

    int sum = sum_arr(arr);
    printf("The sum is : %d\n", sum);

    return 0;
}

void get_vals(int* arr) {
    for(int i = 0; i < 10; i++) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int sum_arr(int* arr) {
    int sum = 0;
    get_vals(arr);
    
    for(int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    return sum;
}
