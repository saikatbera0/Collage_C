#include<stdio.h>
int spy(int num){
    int p=1,s=0,r;
    while(num>0){
        r=num%10;
        s=s+r;
        p=p*r;
        num=num/10;
    }
    return s==p;
    
}
void main()
{
    int n,res;
    printf("Enter the Number:");
    scanf("%d",&n);
    res=spy(n);
    if(res){
        printf("This is a spy number");
    }
    else{
        printf("This is not a Spy number");
    }
}