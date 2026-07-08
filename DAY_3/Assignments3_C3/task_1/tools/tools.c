// import header file
#include "tools.h"

void annoy(void) {
    printf("Wrong Answer Try Again!\n");
    sleep(ONE_SECOND); // function i found that makes the code wait for some time here it waits one second
    printf("Are you even trying?\n");
    sleep(ONE_SECOND);
    printf("You are washed\n");
    sleep(ONE_SECOND);
}

void alarming(void) {
    float guess = -1;
    float answer = 1;

    while (guess != answer) {
        printf("What is the solution of this equation?\n");
        printf("(42 >> 3 & 15) * (12345 %% 2) ^ (85 | 120) * 0 + (17 << 2 == 68)\n"); // very complicated looking equation i got from the internet that  is just equal to 1
        scanf("%f", &guess);

        // check if the answer is wrong 
        if (guess == answer) {
            printf("Ok you actually got it\n");
            break;
        } 

        annoy();

    }
}