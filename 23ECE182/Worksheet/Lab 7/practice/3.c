#include <stdio.h> 

// Function prototype: takes two integers, returns nothing (void) 

void addNumbers(int num1, int num2); 

int main() { 
    int a = 10, b = 20; 
    printf("Calling addNumbers with arguments %d and %d\n", a, b); 
    addNumbers(a, b); // Function call with arguments 
    return 0; 
} 
// Function definition 
void addNumbers(int num1, int num2) { 
    int sum = num1 + num2; 
    printf("The sum is: %d\n", sum); 
} 