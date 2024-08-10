/*1.write a c program to print all the spy number from an array
2.Write a C program to reverse an Array.*/
#include<stdio.h>
int main(){
    int a[3],n,sum=0,product=1,r;
    printf("Enter the Number: ");
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++){
        n=a[i];
        while(n>0)
        {
            r=n%10;
            sum=sum+r;
            product=product*r;
            n=n/10;
        }
        if(sum==product){
            printf("%d",a[i]);
        }
    }
    
}