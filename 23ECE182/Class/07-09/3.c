#include <stdio.h>

int main(){
    int a,b,ans;
    char op;
    printf("Enter a and b:  ");
    scanf("%d %d",&a,&b);
    printf("Enter the operator (+ - * /):   ");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        ans=a+b;
        printf("Result is %d",ans);
        break;
    case '-':
        ans=a-b;
        printf("Result is %d",ans);
        break;
    case '*':
        ans=a*b;
        printf("Result is %d",ans);
        break;
    case '/':
        ans=a/b;
        printf("Result is %d",ans);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}