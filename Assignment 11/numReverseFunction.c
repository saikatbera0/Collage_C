#include<stdio.h>
void reverse(int num){
    int r,rev=0;
    while(num>0){
        r=num%10;
        rev=(rev*10)+r;
        num=num/10;
    }
    printf("The reverse Number is: %d",rev);
}
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    reverse(n);
}