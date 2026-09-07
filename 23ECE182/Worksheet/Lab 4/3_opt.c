#include <stdio.h>
#include <string.h>

int main(){
    int num,a,b,c,d;
    do
    {
        printf("Enter a valid 4 digit number:   ");
        scanf("%d",&num);

    } while (num<1000 || num>9999);
    a=num%10;
    num=(num-a)/10;
    b=num%10;
    num=(num-b)/10;
    c=num%10;
    num=(num-c)/10;
    d=num%10;
    printf("%d%d%d%d",a,b,c,d);
}