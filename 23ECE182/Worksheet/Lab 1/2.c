#include <stdio.h>

int main(){
    float a,b;
    printf("Enter a and b:    ");
    scanf("%f %f",&a,&b);
    float area = a*b;
    float perimeter = 2 * (a+b);
    printf("Area=%.2f Perimeter=%.2f",area,perimeter);  
    return 0;
}

