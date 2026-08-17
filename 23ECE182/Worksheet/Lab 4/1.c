#include <stdio.h>

int main(){
    int sum=0;
    for (size_t i = 0; i <= 50; i+=2)
    {
        sum+=i;
    }
    printf("Sum %d",sum);
    return 0;
}