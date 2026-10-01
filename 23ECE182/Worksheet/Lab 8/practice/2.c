
#include <stdio.h>
int main() {
    // Pointer to an Array
    int arr[] = {10, 20, 30, 40, 50};
    int *arr_ptr = arr; // arr itself decays to a pointer to its first element
    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr_ptr + i)); // Access elements using pointer arithmetic
    }
    printf("\n");
    // Pointer to a String (which is an array of characters)
    char str[] = "Hello World";
    char *str_ptr = str; // str itself decays to a pointer to its first character
    printf("String using pointer:\n");
    while (*str_ptr != '\0') {
        printf("%c", *str_ptr);
        str_ptr++; // Move pointer to the next character
    }
    printf("\n");
    return 0;
}