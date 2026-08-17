#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    printf("Enter your name: \n");
    fgets(name, sizeof(name),stdin);
    printf("Hello, %s",name);
    return 0;
}
