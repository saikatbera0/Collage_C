//Write a C program to calculate sum of array elements....
#include<stdio.h>
int main(){
    int a[5],sum=0;
    printf("Enter the Elements: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of the array elements are:%d",sum);
}