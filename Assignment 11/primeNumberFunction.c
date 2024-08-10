#include<stdio.h>
int prime(int n){
    int flag=0,i;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}
void main(){
    int n,flag;
    printf("Enter the Number: ");
    scanf("%d",&n);
    flag=prime(n);
    if(flag==1){
        printf("This is not a Prime number");
    }
    else{
        printf("this is a prime number");
    }
}