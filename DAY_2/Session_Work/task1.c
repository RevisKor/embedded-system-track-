#include <stdio.h>

int main() {
    int score;

    // get the score from the user
    printf("Enter your grade: ");
    scanf("%d", &score);

    if (score < 0) {
        printf("Invalid grade\n");   // cant be negative score
    } else if (score < 50) {
        printf("failed\n");         // [0 - 49] ----> failed
    } else if (score < 65) {
        printf("Normal\n");         // [50 - 64] ----> normal
    } else if (score < 75) {
        printf("Good\n");           // [65 - 74] ----> good
    } else if (score < 85) {
        printf("Very Good\n");      // [75 - 84] ----> very good
    } else if (score <= 100) {
        printf("Excellent\n");      // [85 - 100] ----> excellent 
    } else {
        printf("Invalid grade\n"); // cant be more than 100
    }
}