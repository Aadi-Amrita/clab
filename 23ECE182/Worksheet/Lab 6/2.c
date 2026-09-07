#include <stdio.h>
#include <string.h>

int main(){
    char input[100], output[100];
    printf("Enter a string to reverse:  ");
    fgets(input, sizeof(input),stdin);

    int len = strlen(input);
    if(input[len-1]=='\n'){
        len--;
    }
    for (size_t i = 0; i < len; i++)
    {
        output[i]=input[len-i-1];
    }
    output[len]='\0';
    printf("Original: %s",input);
    printf("Reversed: %s",output);
    
    return 0;
}