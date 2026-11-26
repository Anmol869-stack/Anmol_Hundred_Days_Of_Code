#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask the user to enter the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop from 1 to n and add each number to sum
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Display the final result
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}

