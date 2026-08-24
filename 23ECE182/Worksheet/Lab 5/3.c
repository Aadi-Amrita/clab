#include <stdio.h>

int main(){
    int nums[50];
    int count=0;
    for (size_t i = 0; i < sizeof(nums); i++)
    {
        int num;
        printf("Enter num for array, enter -1 to stop or it will stop at 50 \n");
        scanf("%d",&num);
        if(num==-1){
            break;
        }else{
            nums[i]=num;
            count++;
        }
    }
    int sum=0;
    for (size_t i = 0; i < count; i++)
    {
        sum+=nums[i];
    }
    printf("%d",sum);
    return 0;
}