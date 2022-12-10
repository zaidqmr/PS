#include <math.h>
#include <stdio.h>
int main(){
    float a, b, c, d, root1, root2, realPart, imagPart;
    printf("Enter the coefficient of x^2: ");
    scanf("%f",&a);
    printf("Enter the coefficient of x: ");
    scanf("%f",&b);
    printf("Enter the constant: ");
    scanf("%f",&c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        root1 = (-b+sqrt(d))/(2*a);
        root2 = (-b-sqrt(d))/(2*a);
        printf("Distinct Roots\n");
        printf("root1=%.2f and root2 = %.2f", root1, root2);
    }
    else if (d == 0) {
        root1 = root2 = -b/(2*a);
        printf("Equal Roots\n");
        printf("root1=root2=%.2f;", root1);
    }
    else {
        realPart = -b/(2*a);
        imagPart = sqrt(-d)/(2*a);
        printf("Imaginary Roots\n");
        printf("root1 =%.2f+%.2fi and root2 =%.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
