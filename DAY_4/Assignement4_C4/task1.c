#include <stdio.h>

void swap(int **ptr1, int **ptr2, int **ptr3);

int main() {
    int x = 1, y = 2, z = 3;
    int *p = &x, *q = &y, *r = &z;

    // step 1
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", r);

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);

    // step 2
    printf("Swapping the variables\n");

    // step 3
    swap(&p, &q, &r);

    // step 4
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", r);

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);

    return 0;
}

 // i looked this up after many frustrated attempts you need **ptr to modify *ptr
void swap(int **ptr1, int **ptr2, int **ptr3) {
    int *tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = tmp;
}