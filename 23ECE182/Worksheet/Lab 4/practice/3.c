#include <stdio.h> 

#define PI 3.14159 

int main() { 

    int choice; 

    float area; 

    printf("Choose the shape to calculate area:\n"); 

    printf("1. Circle\n"); 

    printf("2. Triangle\n"); 

    printf("3. Rectangle\n"); 

    printf("Enter your choice (1/2/3): "); 

    scanf("%d", &choice); 

 switch(choice) { 

        case 1: { 

            float radius; 

            printf("Enter the radius of the circle: "); 

            scanf("%f", &radius); 

            area = PI * radius * radius; 

            printf("Area of Circle = %.2f\n", area); 

            break; 

        } 

        case 2: { 

            float base, height; 

            printf("Enter base and height of the triangle: "); 

            scanf("%f %f", &base, &height); 

            area = 0.5 * base * height; 

            printf("Area of Triangle = %.2f\n", area); 

            break; 

        } 

        case 3: { 

            float length, breadth; 

            printf("Enter length and breadth of the rectangle: "); 

            scanf("%f %f", &length, &breadth); 

            area = length * breadth; 

            printf("Area of Rectangle = %.2f\n", area); 

            break; 

        } 

        default: 

            printf("Invalid choice! Please enter 1, 2, or 3.\n"); 

    } 

return 0; 

} 