// Write a program to print the Fibonacci series up to n terms.

#include <stdio.h>

int main() {
    int n, last = 0, prev = 1, current = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) 
    {
        // Prints the first two terms.
        if(i == 1) 
        {
            printf("%d, ", last);
            continue;
        }
        if(i == 2) 
        {
            printf("%d, ", prev);
            continue;
        }
        current = last + prev;
        last = prev;
        prev = current;
        
        printf("%d, ", current);
    }
    return 0;
}