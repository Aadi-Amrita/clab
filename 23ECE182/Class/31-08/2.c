// 1. print the numbers from 1 to n
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter lower limit:    ");
    scanf("%d",&a);
    printf("Enter upper limit:    ");
    a=(a%2==0)? a+1:a;
    b=(b%2==0)? b-1:b;
    scanf("%d",&b);
    //printf("%d %d \n",a,b);
    for (a; a <=b; a+=2)
    {
        printf("%d \n",a);
    }
    
    return 0;
}