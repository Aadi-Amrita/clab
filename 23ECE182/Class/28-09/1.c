#include <stdio.h>

int main(){
    int len=10;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("Enter element %d:   ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < len; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    return 0;
}