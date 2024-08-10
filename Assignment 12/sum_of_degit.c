#include<stdio.h>
int sumDegit(int n){
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    int sum=sumDegit(n);
    printf("Sum of the degit is: %d",sum);
}