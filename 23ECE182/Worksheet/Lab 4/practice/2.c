#include <stdio.h> 

int main() { 

    int number; 

    long long factorial = 1; // Use long long to handle larger factorials 

    int i = 1; 

    // Prompt the user to enter a number 

    printf("Enter a non-negative integer: "); 

    scanf("%d", &number); 

    // Check for negative input 

    if (number < 0) { 

        printf("Factorial is not defined for negative numbers.\n"); 

    }  

    // Handle the special case for 0! 

    else if (number == 0) { 

        printf("Factorial of 0 is 1.\n"); 

    }  

    // Calculate factorial for positive numbers 

    else { 

        while (i <= number) { 

            factorial *= i; // Multiply factorial by the current value of i 

            i++;            // Increment i 

        } 

        printf("Factorial of %d is %lld.\n", number, factorial); 

    } 

    return 0; 

} 