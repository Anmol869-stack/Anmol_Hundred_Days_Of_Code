#include <stdio.h>

int main() {
    int n, prod = 1, rem, hasOdd = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Product of odd digits = 0\n");
        return 0;
    }
    while (n != 0) {
        rem = n % 10;
        if (rem % 2 != 0) {
            prod *= rem;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (hasOdd)
        printf("Product of odd digits = %d\n", prod);
    else
        printf("No odd digits found.\n");
    return 0;
}
