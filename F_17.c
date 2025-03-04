// Write a C program of power(a,b) to calculate the value of a raised to b.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number : ");
    scanf("%d" , &a);
    
    printf("Enter the power : ");
    scanf("%d" , &b);

    int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }

    printf("%d raised to %d is %d\n", a, b, result);

    return 0;
}