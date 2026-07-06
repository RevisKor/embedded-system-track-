#include <stdio.h>

int main() {
    int x;
    int secret = 3;
    printf("Enter a number: ");
    scanf("%d", &x);
    (x == secret) ? printf("its equal to the secret number\n"): printf("Its not equal to the secret number\n");
    
    return 0;
}