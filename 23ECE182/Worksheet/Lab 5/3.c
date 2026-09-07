#include <stdio.h>

int main(){
    int count=0;
    printf("Enter number of integers to add together:   ");
    scanf("%d",&count); 
    int nums[count];
    for (size_t i = 0; i < count; i++)
    {
        int num;
        printf("Enter num for array\n");
        scanf("%d",&num);
        nums[i]=num;
    }
    int sum=0;
    for (size_t i = 0; i < count; i++)
    {
        sum+=nums[i];
    }
    printf("%d",sum);
    return 0;
}