/*
Write a C program to print the following pattern 
* 
* * 
* * * 
* * * * 
(up to n number of lines) 
*/

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}