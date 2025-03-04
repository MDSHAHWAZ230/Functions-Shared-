// Write a C program to series of the first n number of Fibonacci integers (0, 1, 1, 2, 3, 5, 8, 13, .... ). 

#include <stdio.h>

int main()
{
    int n, i, last = 0, prev = 1, current;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d, ", last);
        current = last + prev;
        last = prev;
        prev = current;
    }
    return 0;
}                     