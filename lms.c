#include <stdio.h>

int main() {
    int num;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Outer if-else structure
    if (num >= 0) {
        // Inner nested if-else structure
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}

