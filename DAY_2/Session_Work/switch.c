#include <stdio.h>
#include <unistd.h>

#define ONE_SECOND  1

int main() {
    /*
    unsigned int score; // cant be a negative number

    // get the score from the user
    printf("Enter your grade: ");
    scanf("%d", &score);

    
    switch(score) {
        case 100: pritnf("You are great\n"); break;
        default: if(score < 100) {
            printf("You are a disgrace\n"); 
            break;
        } else {
            printf("What the what!\n");
            break;
        }
    } */

    unsigned int ID;
    printf("Enter your ID: ");
    scanf("%d", &ID);

    switch(ID) {
        case 1234: printf("Logging in .... \n"); sleep(ONE_SECOND); printf("Hello, Ahmed!\n");  break;

        case 5678: printf("Logging in .... \n"); sleep(ONE_SECOND); printf("Hello, Youseef!\n");  break;

        case 1145: printf("Logging in .... \n"); sleep(ONE_SECOND); printf("Hello, Mina!\n");  break;

        case 67: printf("Really 😑\n"); sleep(ONE_SECOND); printf("Get out!\n");
        
        default:    printf("Logging in ....\n"); sleep(ONE_SECOND); 
                    printf("Wrong ID!\n"); sleep(ONE_SECOND); 
                    printf("Intruder Detected!\n"); sleep(ONE_SECOND); 
                    printf("Initiating Defense Protocol ...\n"); sleep(ONE_SECOND);
                    printf("You have been eliminated 😵\n"); break;
    }

    return 0;
}