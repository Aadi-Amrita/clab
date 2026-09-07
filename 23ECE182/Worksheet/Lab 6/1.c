// 1. Write a program to sort n elements in descending order using Bubble Sort. 
#include <stdio.h>

int main(){
    int count=0;
    printf("Enter number of elements in the array:   ");
    scanf("%d",&count); 
    int nums[count];
    for (size_t i = 0; i < count; i++)
    {
        int num;
        printf("Enter num for array\n");
        scanf("%d",&num);
        nums[i]=num;
    }
    int len = (sizeof(nums))/(sizeof(nums[0]));
    int sorted=0;
    while (sorted==0)
    {
        sorted=1;
        for (int i = 0; i < count-1; i++)
        {
            if(nums[i]<nums[i+1]){
                int temp = nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
                sorted=0;
            }
        }
        
    }
    printf("=== SORTED === \n");
    for (int i = 0; i < len; i++)
    {
        printf("%d \n",nums[i]);
    }
    
    return 0;
}