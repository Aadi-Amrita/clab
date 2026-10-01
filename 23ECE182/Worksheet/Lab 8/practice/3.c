#include <stdio.h>
// Function to be pointed to
int add(int a, int b) {
return a + b;
}
int main() {
// Declare a function pointer that points to a function returning int and taking two intarguments
int (*func_ptr)(int, int);
func_ptr = &add; // Assign the address of the 'add' function to 'func_ptr'
// Call the function using the function pointer
int result = func_ptr(5, 3);
printf("Result of add function called via pointer: %d\n", result);
return 0;
}