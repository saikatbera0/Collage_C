//Write a C program to implement linier search.
#include<stdio.h>
int main(){
    int a[5],f,item;
    
    printf("Enter the Elements: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the item: ");
    scanf("%d",&item);
    for(int i=0;i<5;i++){
        if(a[i]==item){
            f=1;
        }
    }
    if(f==1){
        printf("Element Found");
    }
    else{
        printf("Element not Found");
    }
}