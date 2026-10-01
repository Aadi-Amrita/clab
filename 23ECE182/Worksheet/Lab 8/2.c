#include <stdio.h>
#include <string.h>

int main(){
    char in1[25], in2[25],out[50];
    fgets(in1,sizeof(in1),stdin);
    fgets(in2,sizeof(in2),stdin);
    char *in1_ptr=in1, *in2_ptr=in2, *out_ptr=out;
    int lenin1=strlen(in1),lenin2=strlen(in2);
    if(in1[lenin1-1]=='\n'){
        lenin1--;
    }
    if(in2[lenin2-1]=='\n'){
        lenin2--;
    }
    for (size_t i = 0; i < lenin1; i++)
    {
        *(out_ptr+i)=*(in1_ptr+i);
    }
    for (size_t i = 0; i < lenin2; i++)
    {
        *(out_ptr+lenin1+i)=*(in2_ptr+i);
    }
    *(out_ptr+lenin1+lenin2)='\0';
    printf("%s",out);
    return 0;
}