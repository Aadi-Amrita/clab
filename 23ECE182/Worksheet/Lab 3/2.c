// Write a program to input the marks of a student (between 0 and 100), determine their grade, and display a descriptive message. The program must use only if and if-else statements, and no loops. 
#include <stdio.h>

int main(){
    int marks;
    printf("Enter marks:    ");
    scanf("%d",&marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("Grade A - Excellent performance");
    }else if (marks >= 75 && marks < 90)
    {
        printf("Grade B - Good performance");
    } else if (marks >= 50 && marks < 75)
    {
        printf("Grade C - Average performance");
    } else if (marks >= 0 && marks < 50)
    {
        printf("Grade D - Needs performance");
    } else {
        printf("Invalid marks");
    }
    
    
    return 0;
}