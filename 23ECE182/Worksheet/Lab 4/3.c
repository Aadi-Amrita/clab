#include <stdio.h>
#include <string.h>

int main(){
    char num[50];
    char ans[50];
    int len;
    printf("Enter a ");
    fgets(num,sizeof(num),stdin);
    len = strlen(num);
    if(num[len]=='\n'){
        len--;
    }
    for (size_t i = 0; i < len; i++)
    {
        ans[i]=num[len-i-1];
    }
    ans[len]='\0';
    printf("%s",ans);
    return 0;
}