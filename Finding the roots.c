#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real & different: %.2lf, %.2lf\n", root1, root2);
    } 
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and the same: %.2lf\n", root1);
    } 
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi, %.2lf - %.2lfi\n", realPart,imaginaryPart, realPart, imaginaryPart);
    }
    return 0;
}
