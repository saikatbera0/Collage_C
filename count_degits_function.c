#include<stdio.h>
int count(int num){
    int r,count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    return count;
}
void main(){
    int n,c;
    printf("Enter the Number: ");
    scanf("%d",&n);
    c=count(n);
    printf("Number of the degits of this number is: %d",c);
}