#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("Enter lower limit:    ");
    scanf("%d",&a);
    printf("Enter upper limit:    ");
    scanf("%d",&b);
    for (a; a <= b; a++)
    {
        // float lim=sqrt(a);
        // int ilim=(int)lim;
        int hasZero=0;
        // printf("For %d lim is %d \n",a,ilim);
        for (size_t i = 2; i <= a-1; i++)
        {
            // printf("For %d trying lim %d \n",a,i);
            
            if(a%i==0){
                hasZero=1;
                break;
            }
        }
        if(hasZero==0){
            printf("%d \n",a);
        }
    }
    
    
    return 0;
}