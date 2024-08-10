#include<stdio.h>
int main(){
    int result=0,a=1,b=1;
    for (int i = 1; i < 10; i++)
    {
        
        a=b;
        b=result;
        result=a+b;
        printf("%d  \n",result);

    }
    
}