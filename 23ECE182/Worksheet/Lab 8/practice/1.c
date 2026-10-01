#include <stdio.h>
int main() {
int var = 10; // Declare an integer variable
int *ptr; // Declare an integer pointer
ptr = &var; // Assign the address of 'var' to 'ptr'
printf("Value of var: %d\n", var);
printf("Address of var: %p\n", &var);
printf("Value stored in ptr (address of var): %p\n", ptr);
printf("Value pointed to by ptr: %d\n", *ptr); // Dereference ptr to get the value
// Modifying value using pointer
*ptr = 20;
printf("New value of var: %d\n", var);
return 0;
}