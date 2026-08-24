// Given an array of integers, write a program to count how many times each number occurs.  
#include <stdio.h>

int main(){
    int nums[50]={12,7,5,12,9,3,7,5,5,18,3,12,7,9,21,5,18,3,7,12,9,9,5,21,18,7,3,12,5,18,21,7,9,3,12,5,7,18,9,21,3,5,12,18,7,9,21,3,5,12};
    int len = sizeof(nums)/sizeof(nums[0]);
    int swapped = 1;
    while (swapped!=0){
        swapped=0;
        for (size_t i = 0; i < len-1; i++)
        {
            if(nums[i]>nums[i+1]){
                int tmp = nums[i+1];
                nums[i+1]=nums[i];
                nums[i]=tmp;
                swapped++;
            }
        }
        
    }
    int num = nums[0];
    int count = 0;
    for (size_t i = 0; i < len; i++)
        {
            if (nums[i]==num){
                count++;
            }else{
                printf("%d instances of %d \n",count,num);
                num=nums[i];
                count=1;

            }
        }
    printf("%d instances of %d \n",count,num);
    return 0;
}