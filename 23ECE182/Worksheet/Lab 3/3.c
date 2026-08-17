#include <stdio.h>

int main(){
    int month;
    printf("Enter number of month   ");
    scanf("%d",&month);
    if(month==1){
        printf("\n 31 days");
    } else  if(month==2){
        printf("\n 28 days");
    } else  if(month==3){
        printf("\n 31 days");
    } else  if(month==4){
        printf("\n 30 days");
    } else  if(month==5){
        printf("\n 31 days");
    } else  if(month==6){
        printf("\n 30 days");
    } else  if(month==7){
        printf("\n 31 days");
    } else  if(month==8){
        printf("\n 31 days");
    } else  if(month==9){
        printf("\n 30 days");
    } else  if(month==10){
        printf("\n 31 days");
    } else  if(month==11){
        printf("\n 30 days");
    } else  if(month==12){
        printf("\n 31 days");
    } else {
        printf("\n invalid input enter a number between 1 and 12");
    }
    return 0;
}