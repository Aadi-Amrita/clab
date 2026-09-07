#include <stdio.h>

int main(){
    int nums[10]={5,1,2,3,4,6,8,6,4,3};
    size_t len=(sizeof(nums)/sizeof(nums[0]));
    int esum = 0,osum = 0; //needed to be 0 or got freaky answers
    for (size_t i = 0; i < len; i++)
    {
        if(i%2==0){
            esum+=nums[i];
        }else{
            osum+=nums[i];
        }
    }
    printf("Sum of even is %d \n",esum);
    printf("Sum of odd is %d",osum);
    
    return 0;
}