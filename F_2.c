// Write a C program to solve a given Quadratic equation (ax2 + bx + c = 0). (Without imaginary roots).

#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c, d, x1, x2;
    printf("Enter the values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - 4 * a * c;
    if (d == 0) 
    {
        x1 = -b / (2 * a);
        x2 = x1;
        printf("Roots are real and equal: %.2f, %.2f\n", x1, x2);
    } 
    else if (d > 0) 
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2f, %.2f\n", x1, x2);
    } else 
    {
        printf("Roots are imaginary\n");
    }
    return 0;
}