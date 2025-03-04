// Write a C program to print all the prime numbers from 1 to n. (where n is a number given by the user through keyboard) 

#include <stdio.h>

int main() 
{
    int n, i, j, flag;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: ", n);
    
    for (i = 2; i <= n; i++) 
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) 
        {
            printf("%d \n", i);
        }
    }
    return 0;
}