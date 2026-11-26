#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Step 1: Input coefficients from user
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Safety check for linear equation
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    // Step 2: Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    // Step 3: Categorize and calculate roots based on discriminant
    if (discriminant > 0) {
        // Case 1: Real and Distinct Roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Category: Roots are Real and Distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    else if (discriminant == 0) {
        // Case 2: Real and Equal Roots
        root1 = root2 = -b / (2 * a);
        
        printf("Category: Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else {
        // Case 3: Complex / Imaginary Roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("Category: Roots are Complex and Imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}

