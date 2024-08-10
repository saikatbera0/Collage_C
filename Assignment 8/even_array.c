//Write a C program to print all the even numbers from an array...
#include<stdio.h>
void main(){
    int a[5];
    printf("Enter the Elements: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("The even numbers are: \n");
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            printf("%d\n ",a[i]);
        }
    }
}