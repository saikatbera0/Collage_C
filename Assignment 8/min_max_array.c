//Write a C program to find out maximum and minimum element from an array...
#include<stdio.h>
int main(){
    int a[5],max,min;
    printf("Enter the Elements: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=0;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("The maximum element from on this array is:%d\n",max);
    printf("The minimum element from on this array is:%d",min);
}