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
    } if (marks >= 50 && marks < 75)
    {
        printf("Grade C - Average performance");
    } if (marks >= 0 && marks < 50)
    {
        printf("Grade D - Needs performance");
    }
    
    
    return 0;
}