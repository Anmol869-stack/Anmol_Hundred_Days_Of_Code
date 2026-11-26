#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt user for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Apply conversion formula (9/5 = 1.8)
    fahrenheit = (celsius * 1.8) + 32;

    // Display result with 2 decimal places
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

