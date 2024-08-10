#include<stdio.h>
void sumDegit(int n){
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of the degit is: %d",sum);
}
int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    sumDegit(n);
}