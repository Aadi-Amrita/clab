#include <stdio.h>
#include <string.h>

int main(){
    int num,ans=0;
    printf("Enter a number:   ");
    scanf("%d",&num);
    while (num>0)
    {
        ans=ans*10 + num%10;
        if(num>10){
            num=(num-num%10)/10;
        }else{
            num=0;
        }
    }
    
    printf("%d",ans);
}