#include <stdio.h>

int main(){
    int a,b;
    int *x,*y;
    x=&a;
    y=&b;
    printf("Enter 2 numbers:    ");
    scanf("%d %d",&a,&b);
    printf("Before switch: %d %d \n",a,b);
    int tmp = *x;
    *x=*y;
    *y=tmp;
    printf("After switch: %d %d",a,b);
    return 0;
}