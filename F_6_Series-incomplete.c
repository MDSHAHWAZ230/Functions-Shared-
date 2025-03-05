/*
Write a program to calculate the following series: 
(a) nPr +n Pr+1 +n Pr+2 + . . . +n Pp where 0 ≤ r ≤ p ≤ n 
(a) nCr +n Cr+1 +n Cr+2 + . . . +n Cp where 0 ≤ r ≤ p ≤ n 
(a) Ppi=1nCr+i.mCs−i where 0 ≤ r ≤ n − p and p ≤ s ≤ m
*/

#include <stdio.h>

int main()
{
    int n, r, p, s;
    long long sum = 0, fact_n, fact_r, fact_p, fact_s, fact_diff;

    // Taking inputs
    printf("Enter values for n, r, p, s: ");
    scanf("%d %d %d %d", &n, &r, &p, &s);

    // (a) Calculating permutation series
    printf("\nSeries 1 (Permutation sum):\n");
    sum = 0;
    for (int i = r; i <= p; i++)
    {
        fact_n = 1;
        for (int j = 1; j <= n; j++)
            fact_n *= j;
        
        fact_diff = 1;
        for (int j = 1; j <= (n - i); j++)
            fact_diff *= j;
        
        sum += fact_n / fact_diff;
    }
    printf("Sum of Permutation series: %lld\n", sum);

    // (b) Calculating combination series
    printf("\nSeries 2 (Combination sum):\n");
    sum = 0;
    
    for (int i = r; i <= p; i++)
    {
        fact_n = 1;
        for (int j = 1; j <= n; j++)
            fact_n *= j;
        
        fact_r = 1;
        for (int j = 1; j <= i; j++)
            fact_r *= j;
        
        fact_diff = 1;
        for (int j = 1; j <= (n - i); j++)
            fact_diff *= j;
        
        sum += fact_n / (fact_r * fact_diff);
    }
    printf("Sum of Combination series: %lld\n", sum);

    // (c) Calculating nested combination series
    printf("\nSeries 3 (Nested Combination sum):\n");
    sum = 0;

    for (int i = 1; i <= p; i++)
    {
        fact_n = 1;
        for (int j = 1; j <= n; j++)
            fact_n *= j;
        
        fact_r = 1;
        for (int j = 1; j <= (r + i); j++)
            fact_r *= j;
        
        fact_diff = 1;
        for (int j = 1; j <= (n - (r + i)); j++)
            fact_diff *= j;
        
        fact_s = 1;
        for (int j = 1; j <= s; j++)
            fact_s *= j;
        
        fact_p = 1;
        for (int j = 1; j <= (s - i); j++)
            fact_p *= j;
        
        fact_diff = 1;
        for (int j = 1; j <= i; j++)
            fact_diff *= j;
        
        sum += (fact_n / (fact_r * fact_diff)) * (fact_s / (fact_p * fact_diff));
    }
    printf("Sum of Nested Combination series: %lld\n", sum);

    return 0;
}
