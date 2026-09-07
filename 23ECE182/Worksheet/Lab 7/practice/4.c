#include <stdio.h> 

// Function prototype: takes no arguments, returns an integer 

int getNumber(); 

int main() { 
    int receivedNum; 
    printf("Calling getNumber to get a value...\n"); 
    receivedNum = getNumber(); // Function call, assigning the returned value 
    printf("The number received from getNumber is: %d\n", receivedNum); 
    return 0; 
} 

// Function definition 
int getNumber() { 
    int value; 
    printf("Enter an integer: "); 
    scanf("%d", &value); 
    return value; // Returns the entered integer 
} 