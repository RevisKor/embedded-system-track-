#include <stdio.h>
#include <stdlib.h>

#include "std_types.h"

u32 get_size(void);
void get_elements(u32 *arr, u32 size);
void print_arr(u32* arr, u32 size);
void bubble_sort(u32 *arr, u32 size);

u32 main() {
    u32 size = get_size();

    u32* arr = malloc(size * sizeof(u32));

    get_elements(arr, size);

    bubble_sort(arr, size);

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
    for (int i = 0; i < size; i++) {
        printf("Enter Element %d: ", i);
        scanf("%ld", &arr[i]);
    }
}

void print_arr(u32* arr, u32 size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: %ld\n", i, arr[i]);
        
    }
}

void bubble_sort(u32 *arr, u32 size) {
    
    for (u32 i = 0; i < size -1; i++) {

        for (u32 j = 0; j < size -1; j++) {

            if (arr[j] > arr[j + 1]) {

                u32 tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

            }
        } 
    }
}