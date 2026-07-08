#include <stdio.h>

int main() {
    for(int i = 0; i <=20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    printf("\n");

    for(int i = 0; i <=20; i+=2) {
        printf("%d\n", i);
    }
    printf("\n");

    for(int i = 20; i >= 0; i--) {
        if (i % 2 == 0){
            printf("%d\n", 20 - i);
        }
    }
    printf("\n");

    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i * 2);
    }
    printf("\n");

    return 0;
}