#include <stdio.h>
#include <unistd.h>

int main() {

    // for(int i = 0; i < 5; i++) {
    //     printf("%d\n", i);
    // }

    // for(int i = 0; i < 5; ++i) {
    //     printf("%d\n", i);
    // }
    
    /* 
    int dummy, sum = 0, mult = 1 avg = 0;
    for (int count = 0; count < 10; count++) {
        printf("Enter Number %d: ", count + 1);
        scanf("%d", &dummy);
        sum += dummy;
        mult *= dummy;
    }

    avg = sum / 10;

    printf("The sum is: %d\n", sum);
    printf("The avg is: %d\n", avg);
    printf("The product is: %d\n", mult);
    */

    for (int i = 1; i <= 100; i++) {
        if ((i % 3 == 0) || (i % 7 == 0)) {
            printf("Skippppppped\n");
            continue;
        } else if (i == 16) {
            printf("The Honorured One👑 %d ", i);
            sleep(1);
            printf("🥳🥳\n");
            sleep(1);
            continue;
        } else {
            printf("The Number: %d\n", i);
            sleep(1);
        }
    }
    

    return 0;
}