// Write a C program in order to check whether an integer is palindrome or not.

#include <stdio.h>

int main() 
{
    int n, reverse = 0, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    
    // Reversing the number
    while (n != 0) 
    {
        reverse = reverse * 10;
        reverse = reverse + n % 10;
        n = n / 10;
    }
    
    // Checking if the number is palindrome
    if (original == reverse)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    
    return 0;
}