#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "std_types.h"

#define ONE_SECOND 1


u32 get_size(void);
void get_elements(u32 *arr, u32 size);
void print_arr(u32* arr, u32 size);
void bubble_sort(u32 *arr, u32 size);

u32 main() {
    // get the size and array
    u32 size = get_size();
    u32* arr = calloc(10, sizeof(u32));

    // printbefore assignment
    printf("Before Assignment\n");
    sleep(ONE_SECOND);
    print_arr(arr, size);

    // get the elements
    get_elements(arr, size);

    // sort them
    bubble_sort(arr, size);

    // print after assignment
    printf("After Assignment\n");
    sleep(ONE_SECOND);
    print_arr(arr, size);

    return 0;
}

u32 get_size(void) {
    u32 size;
    printf("Enter the size of the array: ");
    scanf("%ld", &size);

    return size;
}

void get_elements(u32 *arr, u32 size) {
    printf("========================\n");
    for (int i = 0; i < size; i++) {
        printf("| Enter Element %d: ", i + 1);
        scanf("%ld", &arr[i]);
        sleep(ONE_SECOND);
    }
    printf("========================\n");
}

void print_arr(u32* arr, u32 size) {
    printf("========================\n");
    for (int i = 0; i < size; i++) {
        printf("| Element %d: %ld\n", i + 1, arr[i]);
    }
    printf("========================\n");
}

void bubble_sort(u32 *arr, u32 size) {
    
    for (u32 element_index = 0; element_index < size - 1; element_index++) {

        for (u32 j = 0; j < size -1; j++) {

            if (arr[j] > arr[j + 1]) {

                u32 tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

            }
        } 
    }
}