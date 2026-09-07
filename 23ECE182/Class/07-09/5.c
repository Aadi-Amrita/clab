#include <stdio.h>

int main(){
    int nums[20]={5,1,2,3,4,6,8,6,4,3,12,65,12,87,54,7,4,78,65,32};
    size_t len=(sizeof(nums)/sizeof(nums[0]));
    int sort=1;
    while(sort==1){
        sort=0;     
        for (size_t i = 0; i < len-1; i++){
            if(nums[i]<nums[i+1]){
                int tmp = nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=tmp;
                sort=1;
            }
        }
    } 
    printf("Second largest element is %d",nums[1]);
    return 0;
}