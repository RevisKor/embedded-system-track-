#include <stdio.h>
#include <unistd.h>

#define ONE_SECOND  1

int main() {
    int number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = number; i >= 0; i--) {
        printf("%d\n", i);
        sleep(ONE_SECOND);
    }

    printf("Congrats! you just wasted %d seconds 🥳\n", number);
    return 0;
}