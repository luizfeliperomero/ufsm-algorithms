#include <stdio.h>

int main() {
    float prev = 0;// Stores the previous user's input.
    float cur = 0;// Stores the current user's input. 
    int next = 0;// Stores user's option to continue or quit.
    
    // Repeat while user has not chosen to stop the program.
    while(1) {
        printf("\nContinue? (1) yes (2) no: ");
        scanf("%d", &next);
        switch(next) {
            case 1: {
                // Repeat while user's input is valid.
                while(cur >= prev) {
                    prev = cur;
                    printf("Number: ");
                    scanf("%f", &cur);
                }
                cur = prev;// cur needs to be the value before the last iteration.
                printf("Error(Number smaller than previous)\n");

                break;
            }
            case 2: { 
                return 0;
            }
            default: {
                printf("Invalid option");
                break;
            }
        }
    }
}
