#include <stdio.h> 

int num1, num2; 
// Function to swap values using global variables 
void swap() { 
    int temp; 
    temp = num1; 
    num1 = num2; 
    num2 = temp; 
} 

int main() { 
    // Input 
    printf("Enter first number: "); 
    scanf("%d", &num1); 
    printf("Enter second number: "); 
    scanf("%d", &num2); 
    // Before swap 
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2); 
    // calling swap function 
    swap(); 
    // After swap 
    printf("After swapping:  num1 = %d, num2 = %d\n", num1, num2); 
    return 0; 
} 