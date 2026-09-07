#include <stdio.h> 

#include <string.h> 

int main() { 

    char original[100], sorted[100]; 

    int i, j, len; 

    char temp; 

    // Input the string  

    printf("Enter a string: "); 

    fgets(original, sizeof(original), stdin); 

    // Remove newline character if present 

    original[strcspn(original, "\n")] = '\0'; 

    // Copy to another array 

    strcpy(sorted, original); 

    len = strlen(sorted); 

    // Sort the characters using Bubble Sort 

    for(i = 0; i < len - 1; i++) { 

        for(j = 0; j < len - i - 1; j++) { 

            if(sorted[j] > sorted[j + 1]) { 

                temp = sorted[j]; 

                sorted[j] = sorted[j + 1]; 

                sorted[j + 1] = temp; 

            } 

        } 

    } 

    // Output 

    printf("Original string: %s\n", original); 

    printf("Sorted string: %s\n", sorted); 

    return 0; 

} 