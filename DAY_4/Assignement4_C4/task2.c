#include <stdio.h>

void bubble_sort(int *arr, int size);

int main() {
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    bubble_sort(arr, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

/* i researched a bit on bubble sort 
  what is basicly is:
  you compare each element in the array with the element after it
  if its bigger swap 
  we keep doing this till the condion
  arr[i] < arr[i + 1] for every element at once*/
void bubble_sort(int *arr, int size) {
    /* this first loop is to iterate over 
    every element in the array 
    from the first element to the second to last 
    notice we cant have the last here or 
    arr[i + 1] would be in memmory you dont have access to */
    for (int i = 0; i < size -1; i++) {
        // the other loop is to make sure we shift the element as much as it possibly can 
        for (int j = 0; j < size -1; j++) {
            if (arr[j] > arr[j + 1]) {
            int tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
        }
        
        } 
    }
}