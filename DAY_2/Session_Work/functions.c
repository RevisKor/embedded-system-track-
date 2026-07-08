#include <stdio.h>

void greetings(char *name);

int main() {
    greetings("Yahia");

    return 0;
}

void greetings(char *name) {
    printf("Hello, %s How are you?\n", name);
}