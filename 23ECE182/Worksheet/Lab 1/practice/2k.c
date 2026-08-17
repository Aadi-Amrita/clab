#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    int a = 2, b = 8, c , d;
    sprintf(str, "a = %d and b = %d",a,b);
    sscanf(str, "a = &d and b = &d",&c,&d);
    printf(str, "c = %d and d = %d",c,d);
    return 0;
}
