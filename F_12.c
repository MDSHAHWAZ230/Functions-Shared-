// Write a C program to calculate the GCD of Two given numbers.

// GCD = Greatest Common Divisor
// GCD of two numbers is the largest number that divides both of them.

#include <stdio.h>

int main()
{
    int n1, n2, i, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is %d", n1, n2, gcd);
    return 0;
}