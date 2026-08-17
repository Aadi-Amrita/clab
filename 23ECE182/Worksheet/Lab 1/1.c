#include <stdio.h>

void main(){
    float r;
    printf("Enter radius:    ");
    scanf("%f",&r);
    float a = r * r * 3.14;
    printf("Area of the circle is %.2f",a);
    return 0;
}
