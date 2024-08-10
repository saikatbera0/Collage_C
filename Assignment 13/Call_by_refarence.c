#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int a,b;
    printf("Enter a and b value:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swaping a=%d and b=%d",a,b);
}