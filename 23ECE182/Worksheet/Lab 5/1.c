// Write a program to find largest element in an array.  

#include <stdio.h>

int main(){
    int arr[10] = {54, 9, 32, 67, 52,555,74,83,18,22};
    int len = sizeof(arr)/sizeof(arr[0]);
    int a=0;
    for(int i=0;i<len;i++){
        if (arr[i]>a){
            a=arr[i];
        }
    }
    printf("The greatest in the list is %d",a);
    return 0;
}