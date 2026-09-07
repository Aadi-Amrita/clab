#include <stdio.h> 

#include <math.h> 

int isArmstrong(int n) { 
    int temp = n, sum = 0, digits = 0; 
    while (temp) { digits++; temp /= 10; } 
    temp = n; 
    while (temp) { 
        int d = temp % 10; 
        sum += pow(d, digits); 
        temp /= 10; 
    } 
    return (sum == n); 
} 

int main() { 
    int num = 9474; 
    if (isArmstrong(num)) 
        printf("%d is an Armstrong number\n", num); 
    else 
        printf("%d is not an Armstrong number\n", num); 
    return 0; 
} 