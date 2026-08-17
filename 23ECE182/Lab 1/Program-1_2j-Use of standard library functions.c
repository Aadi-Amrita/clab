#include <stdio.h>
int main(){
    char str[50];
    int a=8,b=2;
    sprintf(str,"The variables a=%d and b=%d",a,b);
    printf("%s",str);
}
