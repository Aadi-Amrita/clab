#include <stdio.h> 

int main() { 

    int arr[5] = {4, 9, 2, 7, 5}; 

    int key = 7, found = 0; 

    for (int i = 0; i < 5; i++) { 

        if (arr[i] == key) { 
            
            printf("Element %d found at position %d\n", key, i + 1); 

            found = 1; 

            break; 

        } 

    } 

    if (!found) { 

        printf("Element not found\n"); 

    } 

    return 0; 

} 