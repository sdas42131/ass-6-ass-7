// 2.	Write program, which reads a, b and c. Let ax2 + bx + c = 0 be a quadratic equation. If roots are real and distinct then both roots are printed. If roots are equal then only one root is printed. If roots are imaginary then real part and complex parts of both roots are printed. 


#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, d, r1, r2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    //- condition for real and different roots
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }

    // condition for real and equal roots
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", r1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}