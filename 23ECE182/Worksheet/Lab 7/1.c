#include <stdio.h>

float getCharge(int units){
    float charge;
    if (units<100){
        charge +=units*1.5;
    }else{
        charge+=100*1.5;
        units-=100;
    }
    if (units<100){
        charge +=units*2.5;
    }else{
        charge+=100*2.5;
        units-=100;
    }
    charge += units*4.0;
    return charge;
}

int main(){
    int units;
    float sum;
    printf("Enter units consumed:   ");
    scanf("%d",&units);
    sum = getCharge(units);
    printf("Charge is %.2f", sum);
    return 0;
}