#include <stdio.h>

int main(){
    int arr[]={2,4,8,12,16,18};
    //int arr[5]={2,4,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (size_t i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    return 0;
}