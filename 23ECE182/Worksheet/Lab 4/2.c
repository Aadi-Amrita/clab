#include <stdio.h>

int main(){
    int conv;
    int num;
    float val;
    float res;
    printf("The conversion options are: \n");
    printf("1. km to m \n");
    printf("2. C to F \n");
    printf("3. g to kg \n");
    do
    {
        printf("Choose a valid conversion option    ");
        scanf("%d",&conv);
    } while (conv<=0 || conv>3);
    do
    {
        printf("Choose the first or second value to enter   ");
        scanf("%d",&num);
    } while (num<=0 || num>2);

    printf("Enter the value:    ");
    scanf("%f",&val);

    switch (conv)
    {
    case 1:
        printf("km to m \n");
        if(num==1){
            res=val*1000;
        }else if (num==2){
            res=val/1000;
        }
        break;
    case 2:
        printf("C to F \n");
        if(num==1){
            res= val * (float)9/5 + 32;
        }else if (num==2){
            res=(float)5/9 * (val-32);
        }
        break;
    case 3:
        printf("g to kg \n");
        if(num==1){
            res=val/1000;
        }else if (num==2){
            res=val*1000;
        }
        break;
    default:
        break;
    }
    printf("Result is %.2f",res);
    
    return 0;
}