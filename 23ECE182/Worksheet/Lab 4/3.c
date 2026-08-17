#include <stdio.h>
#include <string.h>

int main(){
    char in[50];
    char out[50];
    printf("Input number:   ");
    fgets(in, sizeof(in),stdin);
    int len = sizeof(in);
    if(in[len]=='\n'){
        len--;
    }
    for (size_t i = 0; i < len-1; i++)
    {
        out[i]=in[len-i-1];
    }
    printf("Inverted:   %s",out);
    
    return 0;
}