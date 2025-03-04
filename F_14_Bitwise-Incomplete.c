// Write a program to find the binary equivalent of an integer number, without using Bitwise operators or complex Methods.

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Binary equivalent of %d is: ", n);
    
    for (i = 1; i <= n; i = i * 2)
    {
        if (i == n)
        {
            printf("1");
            break;
        }
        else if (i > n)
        {
            printf("0");
            i = i / 2;
        }
    }

    return 0;
}