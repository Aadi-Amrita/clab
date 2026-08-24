// Write a program to input month number and print number of days in that month. 
#include <stdio.h>

int main(){
    int month;
    printf("Enter number of month   ");
    scanf("%d",&month);
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        printf("\n 31 days");
    } else  if(month==2){
        printf("\n 28 days");
    }  else  if(month==4 || month==6 || month==9 || month==11){
        printf("\n 30 days");
    } else {
        printf("\n invalid input enter a number between 1 and 12");
    }
    return 0;
}