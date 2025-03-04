// Write a C program to convert the temperature from Celsius to Fahrenheit and vice versa.

#include <stdio.h>

int main()
{
    float temp;
    char choice;

    printf("Enter the temperature: ");
    scanf("%f", &temp);
    
    printf("Enter the choice (C for Celsius, F for Fahrenheit): ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c')
    {
        printf("Temperature in Fahrenheit: %.2f\n", (temp * 9 / 5) + 32);
    }
    else if (choice == 'F' || choice == 'f')
    {
        printf("Temperature in Celsius: %.2f\n", (temp - 32) * 5 / 9);
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}