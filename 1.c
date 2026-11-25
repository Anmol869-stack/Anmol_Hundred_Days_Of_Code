#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0, digits = 0, p, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        p = 1;
        for (i = 0; i < digits; i++) {
            p *= rem;
        }
        sum += p;
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}
