// Menu driven c program using functions to simulate a simple banking system. THe program should support:
// - deposit
// - withdraw money
// - check balance

#include <stdio.h>

int balance=0;

int home(){
    printf("Welcome to Freedom Bank. What do you want to do today? \n");
    printf("1. Deposit money \n");
    printf("2. Withdraw money\n");
    printf("3. Check balance\n");
    printf("Pick an option 1,2,3 or 0 to exit\n");
    int opt;
    do
    {
        scanf("%d",&opt);
    } while (opt<0 || opt>3);
    return opt;
}

void deposit(){
    int amount;
    printf("Enter amount to deposit:    ");
    scanf("%d",&amount);
    balance+=amount;
}

void withdraw(){
    int amount;
    printf("Enter amount to withdraw:   ");
    scanf("%d",&amount);
    balance-=amount;
}

void check(){
    printf("%d \n",balance);
}

int main(){
    int exithome =1;
    while (exithome!=0){
        exithome=home();
        switch (exithome)
        {
        case 1:
            deposit();
            break;
        
        case 2:
            withdraw();
            break;
        
        case 3:
            check();
            break;
        
        default:
            break;
        }
    }
    return 0;
}