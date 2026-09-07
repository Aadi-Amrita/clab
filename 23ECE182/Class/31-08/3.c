// 1. print the numbers from 1 to n
#include <stdio.h>

int main(){
    int n;
    float sum;
    printf("Enter n:    ");
    scanf("%d",&n);
    for(int i=0; i<=n;i++){
        sum+=i;
    }
    printf("Sum is %.0f",sum);
    return 0;
}